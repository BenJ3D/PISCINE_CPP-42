/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 01:41:43 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/06 13:28:37 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
#include <iomanip>

class Form;
# include "Bureaucrat.hpp"

# define GRADE_MAX 1
# define GRADE_MIN 150
class Form
{

	public:

		Form( void );
		Form( Form const & src );
		Form( std::string name, int gradeSign, int gradeExec );
		~Form( void );

		Form &				operator=( Form const & rhs );

		const bool &		getSignStatus( void ) const;
		const std::string &	getName( void ) const;
		int					getGradeForSign( void ) const;
		int					getGradeForExec( void ) const;
		void				beSigned( Bureaucrat& name );

		class GradeTooHighException: public std::exception
		{
			public:
			virtual const char*	what() const throw()
			{
				return "\033[0;33mGrade is too high\033[0;37m";
			}
		};
		class GradeTooLowException: public std::exception
		{
			public:
			virtual const char*	what() const throw()
			{
				return "\033[0;33mGrade is too low\033[0;37m";
			}
		};

		class FormAlreadySigned: public std::exception
		{
			public:
			virtual const char*	what() const throw()
			{
				return "\033[0;33mForm is already signed\033[0;37m";
			}
		};

	private:
		std::string const	_name;
		bool				_signed;
		int const			_GradeSign;
		int const			_GradeExec;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

# define COLOR_BLACK	"\033[0;30m"
# define COLOR_RED		"\033[0;31m"
# define COLOR_GREEN	"\033[0;32m"
# define COLOR_YELLOW	"\033[0;33m"
# define COLOR_BLUE		"\033[0;34m"
# define COLOR_PURPLE	"\033[0;35m"
# define COLOR_CYAN		"\033[0;36m"
# define COLOR_NONE		"\033[0;37m"

#endif /* ************************************************************ FORM_H */