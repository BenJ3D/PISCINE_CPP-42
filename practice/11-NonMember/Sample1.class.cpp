/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:49:07 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 15:20:11 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(void) {
	
	std::cout << "Construtor called" << std::endl;
	Sample1::_nbInst += 1;
	return;
}

Sample1::~Sample1(void) {
	
	std::cout << "Destructor called" << std::endl;
	Sample1::_nbInst -= 1;
	return;
}

int		Sample1::getNbInst(void) {
	
	return Sample1::_nbInst;
}

int		Sample1::_nbInst = 0;