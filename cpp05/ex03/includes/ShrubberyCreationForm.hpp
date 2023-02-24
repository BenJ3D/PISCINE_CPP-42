/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:57:23 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/06 19:04:07 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <fstream>
# include <string>

class ShrubberyCreationForm : public AForm
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm( std::string const & target );
		~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		virtual void		execute( Bureaucrat const & executor ) const;

		class ExceptionOpenFile: public std::exception
		{
			public:
			virtual const char*	what() const throw()
			{
				return "\033[0;33mOpen file error\033[0;37m";
			}
		};

	private:
		std::string			_target;

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */