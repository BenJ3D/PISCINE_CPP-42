/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:27:27 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/17 10:51:51 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << COLOR_PURPLE;
	std::cout << "Dog constructor called" << std::endl;
	std::cout << COLOR_NONE;

	this->_type = "Dog";
	
	}

Dog::Dog( const Dog & src ) : Animal(src)
{
	std::cout << COLOR_PURPLE;
	std::cout << "Dog constructor copy called" << std::endl;
	std::cout << COLOR_NONE;

	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << COLOR_PURPLE;
	std::cout << "Dog destructor called" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->setType(rhs.getType());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "Value = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound( void ) const {
	std::cout << "WAOUUF" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */