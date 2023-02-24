/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:27:27 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/28 18:37:21 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{

	public:

		Cat( void );
		Cat( Cat const & src );
		virtual ~Cat( void );

		Cat &		operator=( Cat const & rhs );

		virtual void	makeSound( void ) const;
		void			setIdea(int index, std::string idea);
		const			std::string&	getIdea(int index) const;
		virtual const std::string		&getType( void ) const;
		virtual void					setType( std::string type );

	private:
		Brain	*_brain;
};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ************************************************************* CAT_H */