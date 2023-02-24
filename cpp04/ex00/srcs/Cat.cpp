/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:27:27 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/17 10:51:43 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat( void )
{
	std::cout << COLOR_PURPLE;
	std::cout << "Cat constructor called" << std::endl;
	std::cout << COLOR_NONE;

	this->_type = "Cat";
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	std::cout << COLOR_PURPLE;
	std::cout << "Cat constructor copy called" << std::endl;
	std::cout << COLOR_NONE;

	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat( void )
{
	std::cout << COLOR_PURPLE;
	std::cout << "Cat destructor called" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->setType(rhs.getType());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "Value = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound( void ) const {
	std::cout << "Miaouuu" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */