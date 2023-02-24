/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:34:16 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/18 05:26:32 by bducrocq         ###   ########lyon.fr   */
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

Fixed::Fixed( int const raw ) : _raw(raw << Fixed::_fract) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const raw ) : _raw(0) {
	std::cout << "Float constructor called" << std::endl;
	_raw = roundf(raw * (1 << Fixed::_fract));
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

std::ostream&	operator<<(std::ostream& o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void		Fixed::setRawBits( int const raw ) {
	this->_raw = raw;
}

int			Fixed::getRawBits( void ) const {
	return (this->_raw);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float		Fixed::toFloat( void ) const {
	return ((float)this->_raw / (float)(1 << Fixed::_fract));
}

int			Fixed::toInt( void ) const {
	return (this->_raw >> Fixed::_fract);
}
/* ************************************************************************** */