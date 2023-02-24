/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:47:04 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/29 15:41:52 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : _type("Animal")
{
	std::cout << COLOR_PURPLE;
	std::cout << "Constructor called " << COLOR_YELLOW << "[Animal]" << std::endl;
	std::cout << COLOR_NONE;
}

Animal::Animal( const Animal & src )
{
	std::cout << COLOR_PURPLE;
	std::cout << "Constructor copy called " << COLOR_YELLOW << "[Animal]" << std::endl;
	std::cout << COLOR_NONE;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal( void )
{
	std::cout << COLOR_PURPLE;
	std::cout << "Destructor called " << COLOR_YELLOW << "[Animal]" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->setType(rhs.getType());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Value = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound( void ) const {
	std::cout << "(No sound for Animal class)" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string			&Animal::getType( void ) const {
	return this->_type;
}

void				Animal::setType( std::string type ) {
	this->_type = type;
}

/* ************************************************************************** */