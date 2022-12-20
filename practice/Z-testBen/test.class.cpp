/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:17:43 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/06 01:08:13 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 //??
#include "test.class.hpp"

Ben::Ben(void) {
	std::cout << "Bonjour je suis le constructor de ben" << std::endl;
	this->foo = 42;
	this->action();
	return ;
}

Ben::~Ben(void) {
	std::cout << "Bonjour je suis le deconstructor de ben" << std::endl;
	this->foo = 13;
	this->action();

	return ;
}

void	Ben::action (void) {
	std::cout << "Bonjour je suis action !!" << std::endl;
	std::cout << "foo = " <<  this->foo << std::endl;
	return ;
}

void	Ben::add (void) {
	std::cout << "Test de add !!" << std::endl;
	return ;
}

