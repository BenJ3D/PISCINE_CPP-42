/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:37:41 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/07 23:10:25 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm *				Intern::_makeShrubberyCreationForm( std::string target){
	return new ShrubberyCreationForm(target);
}

AForm *				Intern::_makeRobotomyRequestForm( std::string target){
	return new RobotomyRequestForm(target);
}

AForm *				Intern::_makePresidentialPardonForm( std::string target){
	return new PresidentialPardonForm(target);
}

AForm*	Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string	NameForm[3]= {	
								"shrubbery creation",
								"robotomy request",
								"presidential pardon"
							};

	AForm*	(Intern::*levelsFct[3])(std::string) = {
								&Intern::_makeShrubberyCreationForm,
								&Intern::_makeRobotomyRequestForm,
								&Intern::_makePresidentialPardonForm
													};
	for (size_t i = 0; i < 3; i++)
	{
		if (NameForm[i].compare(formName) == 0)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*levelsFct[i])(formTarget));
		}
	}
	std::cerr << COLOR_YELLOW 
	<< "Intern : [" << formName << "]: Invalid form name" 
	<< COLOR_NONE << std::endl;
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */