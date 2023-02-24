/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:24:03 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/13 00:19:20 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon( void );
		std::string const&	getType( void ) const;
		void				setType(std::string type);
		
	private:
		std::string	_type;
		
};

#endif