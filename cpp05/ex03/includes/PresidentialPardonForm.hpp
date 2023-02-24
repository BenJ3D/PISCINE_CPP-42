/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:57:23 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/07 15:51:32 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm( std::string const & target );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		virtual void		execute( Bureaucrat const & executor ) const;

	private:
		std::string			_target;
};

#endif /* ******************************************* PresidentialPardonForm_H */