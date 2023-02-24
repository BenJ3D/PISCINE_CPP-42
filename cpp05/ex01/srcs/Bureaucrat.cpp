/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:58:39 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/04 21:17:49 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Empty"), _grade(150)
{}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
		if (grade < GRADE_MAX)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > GRADE_MIN)
			throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) 
: _name(src.getName()), _grade(src.getGrade()) {
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	// std::cerr << "Destructor called : Bureaucrat ["<< this->_name << "]" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &				operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << " bureaucrat grade : " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Bureaucrat::_checkGrade( void )
{
	if (this->_grade < GRADE_MAX)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > GRADE_MIN)
		throw Bureaucrat::GradeTooLowException();
}

void					Bureaucrat::downGrade( void )
{
	if (this->_grade + 1 > GRADE_MIN)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void					Bureaucrat::upGrade( void )
{
	if (this->_grade - 1 < GRADE_MAX)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void					Bureaucrat::signForm( Form & ref ){
	try
	{
		ref.beSigned(*this);
		std::cout << this->_name << " signed " << ref.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " couldn't sign " 
		<< ref.getName() << " because " << e.what() << std::endl;
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string		Bureaucrat::getName( void ) const
{
	return this->_name;
}

int			Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}


/* ************************************************************************** */