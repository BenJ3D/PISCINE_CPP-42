/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:12:58 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/13 01:07:16 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{}

Weapon::~Weapon( void )
{}

std::string const&	Weapon::getType( void ) const {
	return this->_type;
}

void	Weapon::setType( std::string type ) {
	this->_type = type;
}