/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:58:14 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/19 20:26:34 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"
# include <list>
# include <vector>
# define COLOR_RED		"\033[0;31m"
# define COLOR_GREEN	"\033[0;32m"
# define COLOR_YELLOW	"\033[0;33m"
# define COLOR_PURPLE	"\033[0;35m"
# define COLOR_CYAN		"\033[0;36m"
# define COLOR_NONE		"\033[0;37m"

void	pstr(std::string str);

int	main ( void )
{
	pstr("Test 1 : main test subject");
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(42);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	pstr("\nTest 2 replace MutantStack by std::list");
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(42);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	pstr("\nTest 3 : more tests");
	{

		MutantStack<std::string> mstack;
		mstack.push("Enfin le dernier exo de la piscine CPP !!!");
		mstack.push("HelloWorld"); //top element
		std::cout << mstack.top() << std::endl; // afficher le top element

		for (char c = 'A'; c <= 'Z'; c++) //push les lettres de A a Z une par une
		{
			std::string str;
			str = c;
			mstack.push(str);
			str.clear();
		}
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		++it;
		--it;
		++it;
		++it;
		while (it != ite)
		{
			std::cout << *it << " | ";
			++it;
		}
		std::cout << std::endl;
		std::stack<std::string> s(mstack);
		pstr("\nCopy de mstack dans s et affichage s.top : ");
		std::cout << "Size mstack  = " <<  mstack.size() << std::endl;
		std::cout << "Size s       = " <<  s.size() << std::endl;
		std::cout << "mstack.top() = "<< mstack.top() << std::endl;
		std::cout << "s.top()      = "<< s.top() << std::endl;
	}
	return 0;
}

void	pstr(std::string str)
{
	std::cout << COLOR_PURPLE << str << COLOR_NONE << std::endl;
}
