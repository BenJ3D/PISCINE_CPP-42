/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:49:02 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/16 17:15:01 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class.hpp"

void	generateTest()
{
	Base*	ptr = generate();
	Base&	ref = *ptr;
	std::cout << COLOR_PURPLE << "identify by pointer   |  " << COLOR_NONE;
	identify(ptr);
	std::cout << COLOR_PURPLE << "identify by reference |  " << COLOR_NONE;
	identify(ref);
	std::cout << std::endl;
	delete ptr;
	ptr = NULL;
}
int main ( void )
{

	std::cout << COLOR_GREEN << "\nCLASS A" << COLOR_NONE << " | "
	<< COLOR_YELLOW << "CLASS B" << COLOR_NONE << " | "
	<< COLOR_RED << "CLASS C" << COLOR_NONE << std::endl;

	std::cout << "\n\nBoucle de 10 tests :\n" << std::endl;

	for (int i = 0; i < 9; i++)
		generateTest();
	return 0;
}