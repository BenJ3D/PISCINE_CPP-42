/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 08:04:15 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/14 04:43:42 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "GOODBYE !" << std::endl;
}

int	PhoneBook::_prepare_to_add(std::string *str, std::string message, e_typein typein) {
	while (str[0].empty())
	{
		std::cout << message;
		std::getline(std::cin, str[0]);
		
		for (size_t i = 0; str[0][i]; i++)
		{
			if (typein == TYPEIN_DIGIT)
			{
				if (!std::isdigit(str[0][i]))
				{
					std::cerr << "Error : Only positif number without sign please" << std::endl;
					str[0].clear();
					break;
				}
			}
			else if (typein == TYPEIN_ASCII)
			{
				if (str[0][i] < ' ' || str[0][i] > '~')
				{
					std::cerr << "Error : Only char ASCII please" << std::endl;
					str[0].clear();
					break;
				}
				
			}
		}
		size_t i2 = 0;
		while (str[0][i2] && (str[0][i2] == ' ' || str[0][i2] == '\t'))
			i2++;
		if (i2 == strlen(str[0].c_str()))
			str[0].clear();
		if (std::cin.eof())
		{
			std::cerr << std::endl;
			return EXIT_FAILURE;
		}
		std::cin.clear();
	}
	return EXIT_SUCCESS;
}

void	PhoneBook::add(void) {
	
	std::string	FirstN;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
	
	if (this->_index == MAX_CONTACT)
		this->_index = 0;
	if (this->_prepare_to_add(&FirstN, "Enter First Name : ", TYPEIN_ASCII))
			return ;
	if (this->_prepare_to_add(&LastName, "Enter Last Name : ", TYPEIN_ASCII))
			return ;
	if (this->_prepare_to_add(&NickName, "Enter Nick Name : ",  TYPEIN_ASCII))
			return ;
	if (this->_prepare_to_add(&PhoneNumber, "Enter Phone Number : ",  TYPEIN_DIGIT))
			return ;
	if (this->_prepare_to_add(&DarkestSecret, "Enter your Darkest Secret : ", TYPEIN_ASCII))
			return ;

	this->_contact[this->_index].setFisrtN(FirstN);
	this->_contact[this->_index].setLastN(LastName);
	this->_contact[this->_index].setNickN(NickName);
	this->_contact[this->_index].setPhoneNb(PhoneNumber);
	this->_contact[this->_index].setDarkestSecret(DarkestSecret);

	PhoneBook::_index++;
}

int	PhoneBook::getIndex(void) const {

	return (this->_index);
}

void	PhoneBook::_draw_line() const {
		std::cout << "|";
	for (int i = 0; i < ((WCOLUMN * 4) + 3); i++)
		std::cout << "-";
	std::cout << "|" << std::endl;
}

void	PhoneBook::search(void) const {
	
	const std::string	Tindex = "index";
	const std::string	Tfname = "first name";
	const std::string	Tlname = "last name";
	const std::string	Tnname = "nickname";

	
	this->_draw_line();
	
	std::cout << "|";
	std::cout.width(WCOLUMN); std::cout << std::right << Tindex << "|" ;
	std::cout.width(WCOLUMN); std::cout << std::right << Tfname << "|" ;
	std::cout.width(WCOLUMN); std::cout << std::right << Tlname << "|" ;
	std::cout.width(WCOLUMN); std::cout << std::right << Tnname << "|" << std::endl;

	this->_draw_line();
	
	for (int i = 0; i < MAX_CONTACT; i++)
	{
		if(this->_contact[i].isEmpty())
			break;
		std::string fname;
		std::string lname;
		std::string nname;

		fname = _contact[i].getFisrtN();
		fname = fname.substr(0, WCOLUMN);
		if (fname.length() >= WCOLUMN)
			fname[WCOLUMN - 1] = '.';
		
		lname = _contact[i].getLastN();
		lname = lname.substr(0, WCOLUMN);
		if (lname.length() >= WCOLUMN)
			lname[WCOLUMN - 1] = '.';
			
		
		nname = _contact[i].getNickN();
		nname = nname.substr(0, WCOLUMN);
		if (nname.length() >= WCOLUMN)
		{
			nname[WCOLUMN - 1] = '.';
		}

			std::cout << "|";
			std::cout.width(WCOLUMN); std::cout << std::right << i << "|" ;
			std::cout.width(WCOLUMN); std::cout << std::right << fname << "|" ;
			std::cout.width(WCOLUMN); std::cout << std::right << lname << "|" ;
			std::cout.width(WCOLUMN); std::cout << std::right << nname << "|" << std::endl;
	}
	
	this->_draw_line();
	
	if (this->_contact[0].isEmpty())
		return;
	std::string	line;
	int b_ok;
	while (line.empty())
	{
		b_ok = 1;
		std::cout << "Choose index: ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			return;
		for (int i = 0; line[i]; i++)
		{
			if (!std::isdigit(line[i]))
			{
				std::cerr << "Error : Only positif number without sign please" << std::endl;
				b_ok = -1;
				line.clear();
				break;
			}
		}
		if (b_ok != -1 && line.compare(""))
		{
			long long nb = std::atoll(line.c_str());
			if (nb >= 0 && nb < MAX_CONTACT)
			{
				if (b_ok == 1 && this->_contact[nb].isEmpty() == 0)
				{
					this->_print_contact(_contact[nb]);
					return;
				}
				else 
					b_ok = -1;
			}
			std::cerr << "Error : Index not exist" << std::endl;
			line.clear();
		}
	}
}

void	PhoneBook::_print_contact(Contact contact) const {
	
	std::cout << std::endl;
	std::cout.width(20); std::cout << std::left << "First Name : "; std::cout << contact.getFisrtN() << std::endl;
	std::cout.width(20); std::cout << std::left << "Last Name : "; std::cout << contact.getLastN() << std::endl;
	std::cout.width(20); std::cout << std::left << "Nick Name : "; std::cout << contact.getNickN() << std::endl;
	std::cout.width(20); std::cout << std::left << "Phone Number : "; std::cout << contact.getPhoneNb() << std::endl;
	std::cout.width(20); std::cout << std::left << "Darkest Secret : "; std::cout << contact.getDarkestSecret() << std::endl;
	std::cout << std::endl;

}
