/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:37:02 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/11 15:58:47 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/whatever.hpp"
void	pstr(std::string str);

int	main ( void )
{
	pstr("TEST 1 : test du sujet");
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	pstr("TEST 2 : deux float");
	{
		float a = 42.42;
		float b = 21.21;

		std::cout << "max (a, b) = " << max(a, b) << std::endl;
		std::cout << "min (a, b) = " << min(a, b) << std::endl;

		std::cout << "a = " << a << "\nb = " << b << std::endl;
		swap(a, b);
		std::cout << "swap (a, b) \na = " << a << "\nb = " << b << std::endl;
	}
	pstr("TEST 3 : deux double");
	{
		double a = 42;
		double b = 21.21;

		std::cout << "max (a, b) = " << max(a, b) << std::endl;
		std::cout << "min (a, b) = " << min(a, b) << std::endl;

		std::cout << "a = " << a << "\nb = " << b << std::endl;
		swap(a, b);
		std::cout << "swap (a, b) \na = " << a << "\nb = " << b << std::endl;
	}

	return 0;
}

void	pstr(std::string str)
{
	std::cout << "\n\n" << COLOR_PURPLE << str << COLOR_NONE << std::endl;
}