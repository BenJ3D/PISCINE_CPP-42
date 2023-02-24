/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:48:34 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/13 01:25:35 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB( std::string name) : _name(name) {
	this->_weapon = NULL;
}

HumanB::~HumanB( void ) {
}

void	HumanB::attack() const {
	std::cout << this->_name << " attacks with their ";
	if (this->_weapon)
		std::cout << this->_weapon->getType() << std::endl;
	else
		std::cout << "hands" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon =  &weapon;
}