/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:57:23 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/07 16:02:06 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <ctime>
# include <cstdio>
# include <cstdlib>


class RobotomyRequestForm : public AForm
{

	public:

		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm( std::string const & target );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		virtual void		execute( Bureaucrat const & executor ) const;

	private:
		RobotomyRequestForm();
		std::string			_target;
		bool				_random5050( void ) const;
};

#endif /* ******************************************* RobotomyRequestForm_H */