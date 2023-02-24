/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:33:51 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/13 00:54:25 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "./Weapon.hpp"

class HumanB {
	public:
		HumanB( std::string name );
		~HumanB( void );
		void	attack() const;
		void	setWeapon(Weapon& weapon);
		
	private:
		std::string	_name;
		Weapon*		_weapon;
};

#endif