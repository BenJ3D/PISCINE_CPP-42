/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:49:07 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 10:31:25 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"

Sample1::Sample1(void) 
{
	
	std::cout << "Construtor called" << std::endl;
	this->setFoo(0);
	return;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int		Sample1::getFoo(void) const {
	
	return this->_foo;
}

void	Sample1::setFoo(int v) {
	
	if (v >= 0)
		this->_foo = v;
	else
		std::cout << "Error" << std::endl << "foo can be only unsigned int" << std::endl;
	return;
}
