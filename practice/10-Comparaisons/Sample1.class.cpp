/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:49:07 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 14:37:27 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"

Sample1::Sample1(int p1) {
	
	std::cout << "Construtor called" << std::endl;
	this->_foo = p1;
	return;
}

Sample1::~Sample1(void) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}

int		Sample1::getFoo(void) const {
	
	return this->_foo;
}

int		Sample1::compare(Sample1 *other) const {
	
	if (this->_foo < other->getFoo () )
		return -1;
	else if (this->_foo > other->getFoo() )
		return 1;

	return 0;
}
