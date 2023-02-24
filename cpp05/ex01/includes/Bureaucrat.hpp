/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:58:39 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/05 13:00:57 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat;
# include "Form.hpp"
# include <iostream>

# define GRADE_MAX 1
# define GRADE_MIN 150

class Bureaucrat
{

	public:

		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat&					operator=( Bureaucrat const & rhs );

		int							getGrade( void ) const;
		const std::string			getName( void ) const;
		void						upGrade( void );
		void						downGrade( void );
		void						signForm( Form & ref );

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

	private:

		Bureaucrat();
		void					_checkGrade( void );
		const std::string		_name;
		int						_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

# define COLOR_BLACK	"\033[0;30m"
# define COLOR_RED		"\033[0;31m"
# define COLOR_GREEN	"\033[0;32m"
# define COLOR_YELLOW	"\033[0;33m"
# define COLOR_BLUE		"\033[0;34m"
# define COLOR_PURPLE	"\033[0;35m"
# define COLOR_CYAN		"\033[0;36m"
# define COLOR_NONE		"\033[0;37m"

#endif /* ****************************************************** BUREAUCRAT_H */