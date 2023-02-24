/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 23:04:05 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/18 02:19:06 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &		Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_raw = rhs.getRawBits();
	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void		Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

int			Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

/* ************************************************************************** */