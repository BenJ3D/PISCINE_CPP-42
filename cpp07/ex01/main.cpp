/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:03:40 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/16 19:00:31 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/iter.hpp"

void	pstr(std::string str);

int	main( void )
{

	int				arrA[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::string		arrB[] = {"Bonjour", "comment", "ca va ?"};
	float			arrC[] = {1.2, 3.4, 5.6, 7.8, 9.1};

	pstr("TEST 1 : int array");
	iter(arrA, 11, displayValue);
	pstr("TEST 1bis : pass all value = 0");
	iter(arrA, 11, toZero<int>);
	iter(arrA, 11, displayValue);
	pstr("TEST 2 : std::string array");
	iter(arrB, 3, displayValue<const std::string>);
	pstr("TEST 3 : float array");
	iter(arrC, 5, displayValue);
	pstr("TEST 4 : float array mutiply by 42");
	iter(arrC, 5, multiplyBy42<float>);
	iter(arrC, 5, displayValue);


	return 0;
}

void	pstr(std::string str)
{
	std::cout << "\n\n" << COLOR_PURPLE << str << COLOR_NONE << std::endl;
}
