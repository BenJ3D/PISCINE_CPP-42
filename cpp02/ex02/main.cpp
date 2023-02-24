/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:25:21 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/18 06:25:35 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl << std::endl;

	//test complementaires : 

	std::cout << Fixed::min(a, b) << std::endl;

	std::cout << "\na = " << a << " b = " << b << std::endl;
	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a > b = " << (a > b) << std::endl;
	std::cout << "a < b = " << (a < b) << std::endl;

	Fixed c(42.42f);
	Fixed d(21);

	std::cout << "\nc = " << c << " d = " << d << std::endl;
	std::cout << "c / d = " << (c / d) << std::endl;
	std::cout << "c * d = " << (c * d) << std::endl;

	return 0;
}