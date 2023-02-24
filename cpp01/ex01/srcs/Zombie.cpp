/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 06:09:23 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/16 02:13:51 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie( void ) {
}

Zombie::Zombie( std::string name ) : _name(name) {
}

Zombie::~Zombie( void ) {
	std::cerr << this->_name << ": has been destroyed" << std::endl;
}

void	Zombie::announce( void ) const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->_name = name;
}

