/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:51:16 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/07 22:49:32 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 25, 5), _target("NoTarget")
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
: AForm(src), _target(src._target)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
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

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{

	if (executor.getGrade() > this->getGradeForExec())
		throw AForm::GradeTooLowException();
	std::cout << executor.getName() << " execute " << this->getName() << std::endl;
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */