/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 01:41:42 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/06 13:40:55 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() 
:
_name("FormGeneric"),
_signed(false),
_GradeSign(GRADE_MIN),
_GradeExec(GRADE_MIN)
{
}

Form::Form( const Form & src ) 
:
_name(src.getName()),
_signed(src._signed),
_GradeSign(src._GradeSign),
_GradeExec(src._GradeExec)
{}

Form::Form(  std::string name, int gradeSign, int gradeExec  ) 
:
_name(name),
_signed(false),
_GradeSign(gradeSign),
_GradeExec(gradeExec)
{
		if (gradeExec < GRADE_MAX || gradeSign < GRADE_MAX)
			throw Form::GradeTooHighException();
		else if (gradeExec > GRADE_MIN || gradeSign > GRADE_MIN)
			throw Form::GradeTooLowException();

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
	}
	return *this;
}

void	traceTabLine(int wcol1, int wcol2,std::ostream & o)
{
    o << COLOR_BLUE << "+";
	for (int i = 0; i - 1<= wcol1; i++)
		o << COLOR_BLUE << "-";
    o << COLOR_BLUE << "+";
	for (int i = 0; i - 1 <= wcol2; i++)
		o << COLOR_BLUE << "-";
    o << COLOR_BLUE << "+" << std::endl;

}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	std::string stat;
	int wcol2;
	int wcol1 = 17;

	wcol2 = i.getName().length() + 3;

	traceTabLine(wcol1, wcol2, o);
	o << "|  " << std::left << std::setw(wcol1) << "Form Name"
	  << "|  " << std::left << std::setw(wcol2) << i.getName() << "|" << std::endl;
	traceTabLine(wcol1, wcol2, o);
	if (i.getSignStatus() == true)
		o << COLOR_GREEN "|  " << std::left << std::setw(wcol1) << "Sign status"
		<< "|  " << std::left << std::setw(wcol2) << "Signed"
		<< "|" << std::endl;
	else
		o << COLOR_RED "|  " << std::left << std::setw(wcol1) << "Sign status"
		<< "|  " << std::left << std::setw(wcol2) << "Not signed"
		<< "|" << std::endl;
	traceTabLine(wcol1, wcol2, o);
	o << "|  " << std::left << std::setw(wcol1) << "Grade for sign"
	  << "|  " << std::left << std::setw(wcol2) << i.getGradeForSign() << "|" << std::endl;
	traceTabLine(wcol1, wcol2, o);
	o << "|  " << std::left << std::setw(wcol1) << "Grade for exec"
	  << "|  " << std::left << std::setw(wcol2) << i.getGradeForExec() << "|" << std::endl;
	traceTabLine(wcol1, wcol2, o);
	o << COLOR_NONE;

	return o;
}

void	Form::beSigned( Bureaucrat& name ) {

	if (this->_signed == true)
		throw Form::FormAlreadySigned();
	else if (name.getGrade() <= this->_GradeSign)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int				Form::getGradeForSign( void ) const {
		return this->_GradeSign;
}

int				Form::getGradeForExec( void ) const {
		return this->_GradeExec;
}

std::string const &	Form::getName( void ) const {
	return this->_name;
}

const bool	&	Form::getSignStatus( void ) const {
	return this->_signed;
}

/* ************************************************************************** */