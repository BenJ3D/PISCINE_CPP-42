/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 01:41:42 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/08 00:50:25 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm()
:
_name("FormGeneric"),
_signed(false),
_GradeSign(GRADE_MIN),
_GradeExec(GRADE_MIN)
{
}

AForm::AForm( const AForm & src ) 
:
_name(src.getName()),
_signed(src._signed),
_GradeSign(src._GradeSign),
_GradeExec(src._GradeExec)
{}

AForm::AForm(  std::string name, int gradeSign, int gradeExec  ) 
:
_name(name),
_signed(false),
_GradeSign(gradeSign),
_GradeExec(gradeExec)
{
		if (gradeExec < GRADE_MAX || gradeSign < GRADE_MAX)
			throw AForm::GradeTooHighException();
		else if (gradeExec > GRADE_MIN || gradeSign > GRADE_MIN)
			throw AForm::GradeTooLowException();

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
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

std::ostream &			operator<<( std::ostream & o, AForm const & i )
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

void	AForm::beSigned( Bureaucrat& name ) {

	if (this->_signed == true)
		throw AForm::FormAlreadySigned();
	else if (name.getGrade() <= this->_GradeSign)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

/*
** --------------------------------- METHODS ---------------------------------
*/

void	AForm::execute( Bureaucrat const & executor ) const {

	std::cout << this->_name << ": abstract class," << executor.getName()  << " has no action to execute" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int				AForm::getGradeForSign( void ) const {
		return this->_GradeSign;
}

int				AForm::getGradeForExec( void ) const {
		return this->_GradeExec;
}

std::string const &	AForm::getName( void ) const {
	return this->_name;
}

const bool	&	AForm::getSignStatus( void ) const {
	return this->_signed;
}

/* ************************************************************************** */