/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:21:07 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/13 01:07:09 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA( void ) {
}

void	HumanA::attack() const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}