/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:27:27 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/17 11:03:22 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog( void )
{
	std::cout << COLOR_PURPLE;
	std::cout << "Constructor called "<< COLOR_CYAN << "[Dog]" << std::endl;
	std::cout << COLOR_NONE;

	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( const Dog & src ) : Animal(src)
{
	std::cout << COLOR_PURPLE;
	std::cout << "Constructor copy called "<< COLOR_CYAN <<"[Dog]" << std::endl;
	std::cout << COLOR_NONE;

	this->_type = "Dog";
	this->_brain = new Brain();
	for (int i = 0; i < MAX_IDEAS; i++)
			this->_brain->setIdea(i, src._brain->getIdea(i));
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog( void )
{
	std::cout << COLOR_PURPLE;
	std::cout << "Destructor called "<< COLOR_CYAN <<"[Dog]" << std::endl;
	std::cout << COLOR_NONE;

	delete this->_brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->setType(rhs.getType());
		if (rhs._brain)
		{
			for (int i = 0; i < MAX_IDEAS; i++)
				this->_brain->setIdea(i, rhs._brain->getIdea(i));
		}
	
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
	std::cout << "WOUAFFF" << std::endl;
}

void			Dog::setIdea(int index, std::string idea){
	this->_brain->setIdea(index, idea);
}

const std::string&	Dog::getIdea( int index ) const {
	return this->_brain->getIdea(index);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */