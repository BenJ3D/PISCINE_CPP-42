/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:17:43 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/02 01:09:17 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits> //??
#include <cctype> //??
#include <sstream>  //??
#include "test.class.hpp"

Ben::Ben(void) {
	std::cout << "Bonjour je suis le constructor de ben" << std::endl;
	return ;
}

Ben::~Ben(void) {
	std::cout << "Bonjour je suis le deconstructor de ben" << std::endl;
	return ;
}

void	Ben::action (void) {
	std::cout << "Bonjour je suis action !!" << std::endl;
	return ;
}

