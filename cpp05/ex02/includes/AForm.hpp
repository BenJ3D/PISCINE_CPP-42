/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 01:41:43 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/07 16:11:17 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include <iomanip>

class AForm;
# include "Bureaucrat.hpp"

# define GRADE_MAX 1
# define GRADE_MIN 150
class AForm
{

	public:

		AForm( AForm const & src );
		AForm( std::string name, int gradeSign, int gradeExec );
		virtual ~AForm( void );

		AForm &				operator=( AForm const & rhs );

		const bool &		getSignStatus( void ) const;
		const std::string &	getName( void ) const;
		int					getGradeForSign( void ) const;
		int					getGradeForExec( void ) const;
		void				beSigned( Bureaucrat& name );

		virtual void		execute( Bureaucrat const & executor ) const;

		class GradeTooHighException: public std::exception
		{
			public:
			virtual const char*	what() const throw()
			{
				return "\033[0;33mForm Grade is too high\033[0;37m";
			}
		};
		class GradeTooLowException: public std::exception
		{
			public:
			virtual const char*	what() const throw()
			{
				return "\033[0;33mForm Grade is too low\033[0;37m";
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

		class FormNotSigned: public std::exception
		{
			public:
			virtual const char*	what() const throw()
			{
				return "\033[0;33mit is not sign\033[0;37m";
			}
		};

	private:
		AForm( void );
		std::string const	_name;
		bool				_signed;
		int const			_GradeSign;
		int const			_GradeExec;
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

# define COLOR_BLACK	"\033[0;30m"
# define COLOR_RED		"\033[0;31m"
# define COLOR_GREEN	"\033[0;32m"
# define COLOR_YELLOW	"\033[0;33m"
# define COLOR_BLUE		"\033[0;34m"
# define COLOR_PURPLE	"\033[0;35m"
# define COLOR_CYAN		"\033[0;36m"
# define COLOR_NONE		"\033[0;37m"

#endif /* ************************************************************ FORM_H */