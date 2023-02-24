/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:07:07 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/12 22:27:31 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string	string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "adress str        = " << &string << std::endl;
	std::cout << "adress stringPTR  = " << stringPTR << std::endl;
	std::cout << "adress stringREF  = " << &stringREF << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "string            = " << string << std::endl;
	std::cout << "stringPTR         = " << *stringPTR << std::endl;
	std::cout << "stringREF         = " << stringREF << std::endl;

	return 0;
}