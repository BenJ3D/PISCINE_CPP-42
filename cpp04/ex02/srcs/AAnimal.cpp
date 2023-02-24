/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:47:04 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/30 22:51:03 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << COLOR_PURPLE;
	std::cout << "Constructor called " << COLOR_YELLOW << "[AAnimal]" << std::endl;
	std::cout << COLOR_NONE;
}

AAnimal::AAnimal( const AAnimal & src )
{
	std::cout << COLOR_PURPLE;
	std::cout << "Constructor copy called " << COLOR_YELLOW << "[AAnimal]" << std::endl;
	std::cout << COLOR_NONE;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal( void )
{
	std::cout << COLOR_PURPLE;
	std::cout << "Destructor called " << COLOR_YELLOW << "[AAnimal]" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	this->_type = rhs.getType();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AAnimal const & i )
{
	o << "Value = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string			&AAnimal::getType( void ) const {
	return this->_type;
}

/* ************************************************************************** */