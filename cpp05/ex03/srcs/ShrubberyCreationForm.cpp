/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:57:22 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/07 16:15:11 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("ShrubberyCreationForm", 145, 137), _target("NoName_shrubbery")
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
: AForm(src), _target(src._target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target + "_shrubbery")
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		AForm::operator=(rhs);
		this->_target = rhs._target;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	
	if (executor.getGrade() > this->getGradeForExec())
		throw AForm::GradeTooLowException();
	std::ofstream ofs;
	ofs.open(_target.c_str());
	if (ofs.fail())
		throw ShrubberyCreationForm::ExceptionOpenFile();
	ofs << "                                  "<< std::endl;
	ofs << "         &&& &&  & &&"             << std::endl;
	ofs << "      && &\\/&\\|& ()|/ @, &&"     << std::endl;
	ofs << "      &\\/(/&/&||/& /_/)_&/_&"     << std::endl;
	ofs << "   &() &\\/&|()|/&\\/ '%\" & ()"   << std::endl;
	ofs << "  &_\\_&&_\\ |& |&&/&__%_/_& &&"   << std::endl;
	ofs << "&&   && & &| &| /& & % ()& /&&"    << std::endl;
	ofs << " ()&_---()&\\&\\|&&-&&--%---()~"   << std::endl;
	ofs << "     &&     \\|||"                 << std::endl;
	ofs << "             |||"                  << std::endl;
	ofs << "             |||"                  << std::endl;
	ofs << "             |||"                  << std::endl;
	ofs << "       , -=-~  .-^- _"             << std::endl;
	ofs << "              `"                   << std::endl;
	std::cout <<                                        COLOR_RED;
	std::cout << "                                  "<< std::endl;
	std::cout << "         &&& &&  & &&"             << std::endl;
	std::cout << "      && &\\/&\\|& ()|/ @, &&"     << std::endl;
	std::cout << "      &\\/(/&/&||/& /_/)_&/_&"     << std::endl;
	std::cout << "   &() &\\/&|()|/&\\/ '%\" & ()"   << std::endl;
	std::cout << "  &_\\_&&_\\ |& |&&/&__%_/_& &&"   << std::endl;
	std::cout << "&&   && & &| &| /& & % ()& /&&"    << std::endl;
	std::cout << " ()&_---()&\\&\\|&&-&&--%---()~"   << std::endl;
	std::cout << "     &&     \\|||"                 << std::endl;
	std::cout << "             |||"                  << std::endl;
	std::cout << "             |||"                  << std::endl;
	std::cout << "             |||"                  << std::endl;
	std::cout << "       , -=-~  .-^- _"             << std::endl;
	std::cout << "              `"                   << std::endl;
	std::cout <<                                       COLOR_NONE;
	std::cout << "This tree has been added to traget file : [" 
	<< _target << "] in current folder." << std::endl;
	ofs.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */