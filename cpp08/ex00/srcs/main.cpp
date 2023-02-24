/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:58:13 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/17 19:00:46 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyFind.hpp"
#include <map>
#include <vector>
#include <list>
#include <algorithm>

int main ( void )
{
	std::list<int>			lst1;
	
	lst1.push_back(3);
	lst1.push_back(13);
	lst1.push_back(23);
	lst1.push_back(21);
	lst1.push_back(42);
	lst1.push_back(64);
	lst1.push_back(128);
	lst1.push_back(256);
	lst1.push_back(512);
	lst1.push_back(1024);
	lst1.push_back(2048);
	lst1.push_back(4096);

	if (easyfind(lst1, 3))
		std::cout << "FIND 3 in lst1 : TRUE" << std::endl;
	else
		std::cout << "FIND 3 in lst1 : FALSE" << std::endl;



	if (easyfind(lst1, 512))
		std::cout << "FIND 512 in lst1 : TRUE" << std::endl;
	else
		std::cout << "FIND 512 in lst1 : FALSE" << std::endl;



	if (easyfind(lst1, 4096))
		std::cout << "FIND 4096 in lst1 : TRUE" << std::endl;
	else
		std::cout << "FIND 4096 in lst1 : FALSE" << std::endl;



	if (easyfind(lst1, 513))
		std::cout << "FIND 513 in lst1 : TRUE" << std::endl;
	else
		std::cout << "FIND 513 in lst1 : FALSE" << std::endl;
	return 0;
}