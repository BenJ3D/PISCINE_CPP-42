/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:51:16 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/07 16:30:09 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
: AForm("RobotomyRequestForm", 72, 45), _target("NoTarget")
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
: AForm(src), _target(src._target)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
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

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{

	if (executor.getGrade() > this->getGradeForExec())
		throw AForm::GradeTooLowException();
	std::cout << executor.getName() << " execute " << this->getName() << std::endl;
	{
		const char *str = "brrzz brrzzz Vrrrooooooomm brrzz";
		for (int i = 0; str[i] != '\0'; ++i)
		{
			std::putchar(str[i]);
			std::fflush(stdout);
			std::clock_t start = std::clock();
			while ((std::clock() - start) / (double)CLOCKS_PER_SEC < 0.03)
				;
		}
		std::putchar('\n');
	}
	{
		const char *str = "... ... ... ...";
		for (int i = 0; str[i] != '\0'; ++i)
		{
			std::putchar(str[i]);
			std::fflush(stdout);
			std::clock_t start = std::clock();
			while ((std::clock() - start) / (double)CLOCKS_PER_SEC < 0.03)
				;
		}
		std::putchar('\n');
		if (this->_random5050())
		{
			std::cout << COLOR_GREEN 
			<< this->_target << " has been successfully robotized" 
			COLOR_NONE << std::endl;
		}
		else
		{
			std::cout << COLOR_RED 
			<< this->_target << " has not been robotized" 
			COLOR_NONE << std::endl;
		}
	}
}

bool RobotomyRequestForm::_random5050(void) const {

	std::srand(std::time(NULL));
	return std::rand() % 2;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */