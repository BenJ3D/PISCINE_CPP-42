/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:47:04 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/28 14:58:25 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << COLOR_PURPLE;
	std::cout << "WrongAnimal constructor called" << std::endl;
	std::cout << COLOR_NONE;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << COLOR_PURPLE;
	std::cout << "WrongAnimal constructor copy called" << std::endl;
	std::cout << COLOR_NONE;

	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << COLOR_PURPLE;
	std::cout << "WrongAnimal destructor called" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->setType(rhs.getType());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << "Value = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongAnimal::makeSound( void ) const {
	std::cout << "Wrong Animal has no sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string			&WrongAnimal::getType( void ) const {
	return this->_type;
}

void				WrongAnimal::setType( std::string type ) {
	this->_type = type;
}

/* ************************************************************************** */