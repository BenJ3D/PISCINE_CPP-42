/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:37:41 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/07 19:20:14 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &			operator=( Intern const & rhs );
		AForm *				makeForm( std::string NameForm, std::string target);

	private:
		AForm *				_makeShrubberyCreationForm( std::string target);
		AForm *				_makeRobotomyRequestForm( std::string target);
		AForm *				_makePresidentialPardonForm( std::string target);
		
};

#endif /* ********************************************************** INTERN_H */