/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 01:58:24 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/15 23:10:49 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Sed.hpp"

Sed::Sed( void )  
:
_filePath(""),
_s1(""),
_s2("")
{}

Sed::Sed( std::string filePath, std::string s1, std::string s2 ) 
:
_filePath(filePath),
_s1(s1),
_s2(s2)
{}

Sed::~Sed( void ) {
	
	if (this->_ifs.is_open())
		this->_ifs.close();
	if (this->_ofs.is_open())
		this->_ofs.close();
}

void Sed::setFile( std::string filePath ) {
	this->_filePath = filePath;
}

void	Sed::setS1( std::string s1 ){
	this->_s1 = s1;
}

void Sed::setS2( std::string s2 ) {
	this->_s2 = s2;
}

int Sed::_check_arg (std::string filename, std::string s1, std::string s2) const
{
	if (filename.compare("") == 0)
		std::cerr << "Erreur : <filename> est vide" << std::endl;
	else if (s1 ==  "")
		std::cerr << "Erreur : <s1> est vide" << std::endl;
	else if (s2 == "")
		std::cerr << "Erreur : <s2> est vide" << std::endl;
	else if (s1 == s2)
		std::cerr << "Erreur : <s1> et <s2> doivent être différent" << std::endl;
	else
		return 0;
	return 1;
}

int	Sed::_openfile( void ) {
	this->_ifs.open(this->_filePath.c_str());
	if (this->_ifs.is_open())
		;
	else {
		std::cerr << "Erreur : "; perror(this->_filePath.c_str()); return 1; }
	
	std::string pathcp;
	pathcp = this->_filePath.append(".replace");
	this->_ofs.open(pathcp.c_str());
	if (this->_ofs.is_open())
		return 0;
	else {
		std::cerr << "Erreur : "; perror(pathcp.c_str()); return 1; }
}

void	Sed::_searchAndReplace( void )
{
	std::string	nline;
	std::size_t	pos;

	while ((pos = this->_tmpstr.find(this->_s1)) != std::string::npos)
	{
		nline.append(this->_tmpstr, 0, pos);
		nline.append(this->_s2);
		this->_tmpstr.erase(0, pos + this->_s1.length());
	}
	nline.append(this->_tmpstr);
	this->_tmpstr = nline;
	nline.clear();
}

int	Sed::startSed( void ) {
	
	if (this->_check_arg(this->_filePath, this->_s1, this->_s2))
		return 1;
	if (this->_openfile())
		return 1;
	while (this->_ifs)
	{
		std::getline(this->_ifs, this->_tmpstr);
		this->_searchAndReplace();
		this->_ofs << this->_tmpstr;
		if (this->_ifs.eof())
			break ;
		this->_ofs << "\n";
	}
	return 0;
	
}
