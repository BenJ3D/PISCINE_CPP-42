/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:49:07 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 16:51:46 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(void) : foo(0) {
	
	std::cout << "Construtor called" << std::endl;
	return;
}

Sample1::~Sample1(void) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample1::bar(void) const {
	std::cout << "Member function bar called" << std::endl;
	
	return;
}
