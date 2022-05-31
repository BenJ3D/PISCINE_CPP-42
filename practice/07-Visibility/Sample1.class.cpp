/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:49:07 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/31 22:24:35 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"

Sample1::Sample1( void )
{
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " < this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->privateFoo: " < this->publicFoo << std::endl;
	
	
	return;
}

Sample1::~Sample1(void)
{
	std::cout << "Sample destructor" << std::endl;
	return;
}

void	Sample1::publicBar(void) const
{
	
	std::cout << "Member function bar called pi = " << this->pi << std::endl;
	return;
}