/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:26:31 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/19 05:17:07 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
# include <ctime>
void	pstr(std::string str);

int	main ( void )
{
	/**------------------SUJET TEST -----------------------*/
	pstr("Test sujet :");
	{
		Span sp(5);
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		}
		catch (std::exception const &e)
		{
			std::cerr << COLOR_RED << e.what() << COLOR_NONE << std::endl;
		}

		std::cout << sp << std::endl;

		try
		{
			std::cout << COLOR_YELLOW;
			std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
			std::cout << "longestSpan = " << sp.longestSpan() << std::endl;
			std::cout << COLOR_NONE;
		}
		catch (std::exception const &e)
		{
			std::cerr << COLOR_RED << e.what() << COLOR_NONE << std::endl;
		}
	}
	/**----------------------------------------------------*/
	pstr("\nAjouts de plusieurs nombres depuis un autre vector<int> :");
	{
		int	max = 50; // test 200k+ :) ;
		Span sp(max);
		try
		{
			std::vector<int> tmp; //avec un container vector
			std::srand(std::time(NULL));
			for(int i = 0; i < max; i++)
				tmp.push_back(std::rand() % (max * 15420));

			try
			{
				sp.addNumber(tmp.begin(), tmp.end());
			}
			catch (std::exception const &e)
			{
				std::cerr << COLOR_RED << e.what() << COLOR_NONE << std::endl;
			}

			std::cout << sp << std::endl;

			std::cout << COLOR_YELLOW;
			std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
			std::cout << "longestSpan = " << sp.longestSpan() << std::endl;
			std::cout << COLOR_NONE;
		}
		catch (std::exception const &e)
		{
			std::cerr << COLOR_RED << e.what() << COLOR_NONE << std::endl;
		}
	}
	/**----------------------------------------------------*/
	pstr("\nAjouts de plusieurs nombres depuis une list<int> :");
	{
		int	max = 20;
		Span sp(max);
		try
		{
			std::list<int> tmp;  // avec un container list
			std::srand(std::time(NULL));
			for(int i = 0; i < max; i++)
				tmp.push_back(std::rand() % (max * 24257));

			try
			{
				sp.addNumber(tmp.begin(), tmp.end());
			}
			catch (std::exception const &e)
			{
				std::cerr << COLOR_RED << e.what() << COLOR_NONE << std::endl;
			}

			std::cout << sp << std::endl;
			
			std::cout << COLOR_YELLOW;
			std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
			std::cout << "longestSpan = " << sp.longestSpan() << std::endl;
			std::cout << COLOR_NONE;
		}
		catch (std::exception const &e)
		{
			std::cerr << COLOR_RED << e.what() << COLOR_NONE << std::endl;
		}
	}
	pstr("\nBasic test contructor et overload :");
	{
		Span sp(5);
		sp.addNumber(0);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);

		Span sp2(sp);
		Span sp3;
		sp3 = sp;
		
		pstr("\nCreation sp sans arguments puis add 5 nombres\nsp =");
		std::cout << sp << std::endl;
		pstr("\nCreation sp2(sp) par contructor copy\nsp2 =");
		std::cout << sp2 << std::endl;
		pstr("\nCreation sp3 puis assignation via operator= a sp\nsp3 =");
		std::cout << sp3 << std::endl;
	}
	pstr("\nTEST EXCEPTIONS :");
	{
		try
		{
			pstr("\n	Exception apres un add number de trop :");
			Span sp(5);
			sp.addNumber(0);
			sp.addNumber(1);
			sp.addNumber(2);
			sp.addNumber(3);
			sp.addNumber(4);
			sp.addNumber(5); //} un de trop ==> exception
		}
		catch (std::exception const &e)
		{
			std::cerr << COLOR_RED << e.what() << COLOR_NONE << std::endl;
		}
		try
		{
			pstr("\n	Idem mais avec une plage d’itérateurs d'un autre vector<int> :");
			Span sp(5);
			int max = 50;
			std::vector<int> tmp; // avec un container vector
			std::srand(std::time(NULL));
			
			for (int i = 0; i < max; i++) // ajouts nombres randoms
				tmp.push_back(std::rand() % (max * 100));
			
			sp.addNumber(tmp.begin(), tmp.end());
		}
		catch (std::exception const &e)
		{
			std::cerr << COLOR_RED << e.what() << COLOR_NONE << std::endl;
		}
	}
	return 0;
}

void	pstr(std::string str)
{
	std::cout << COLOR_PURPLE << str << COLOR_NONE << std::endl;
}