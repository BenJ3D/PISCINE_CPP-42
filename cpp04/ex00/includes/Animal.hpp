/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:47:04 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/28 17:06:52 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal( void );
		Animal( Animal const & src );
		virtual	~Animal();

		Animal					&operator=( Animal const & rhs );

		virtual void			makeSound( void ) const;

		const std::string		&getType( void ) const;
		void					setType( std::string type );

	protected:
		std::string				_type;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

# define COLOR_BLACK	"\033[0;30m"
# define COLOR_RED		"\033[0;31m"
# define COLOR_GREEN	"\033[0;32m"
# define COLOR_YELLOW	"\033[0;33m"
# define COLOR_BLUE		"\033[0;34m"
# define COLOR_PURPLE	"\033[0;35m"
# define COLOR_CYAN		"\033[0;36m"
# define COLOR_NONE		"\033[0;37m"

#endif /* ********************************************************** ANIMAL_H */