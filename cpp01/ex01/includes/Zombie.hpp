/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 06:03:48 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/12 21:01:35 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		void		announce( void ) const;
		void		setName(std::string name);
		
	private:
		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif