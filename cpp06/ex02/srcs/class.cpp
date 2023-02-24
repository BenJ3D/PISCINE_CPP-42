/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:51:36 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/16 18:00:49 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/class.hpp"

Base::~Base() {}

void	displayGenerate(std::string const & letterClass, std::string const & color);

Base * generate(void)
{
	int	nrand = rand() % 3;

	if (nrand == 0) {
		displayGenerate("A", COLOR_GREEN); return (new A);}
	else if (nrand == 1) {
		displayGenerate("B", COLOR_YELLOW); return (new B);}
	else {
		displayGenerate("C", COLOR_RED); return (new C);}
}

void identify(Base* p)
{
	A * a = dynamic_cast<A*>(p);
	B * b = dynamic_cast<B*>(p);
	C * c = dynamic_cast<C*>(p);

	if (a != NULL)
	{
		std::cout << COLOR_GREEN;
		std::cout << "C'est une class A" << std::endl;
		std::cout << COLOR_NONE;
	}
	else if (b != NULL)
	{
		std::cout << COLOR_YELLOW;
		std::cout << "C'est une class B" << std::endl;
		std::cout << COLOR_NONE;
	}
	else if (c != NULL)
	{
		std::cout << COLOR_RED;
		std::cout << "C'est une class C" << std::endl;
		std::cout << COLOR_NONE;
	}
	(void)a;
	(void)b;
	(void)c;
}

void identify(Base& p)
{
	try
	{
		std::cout << COLOR_GREEN;
		A & a = dynamic_cast<A&>(p);
		std::cout << "C'est une class A" << std::endl;
		std::cout << COLOR_NONE;
		(void)a;
		return;
	}
	catch (std::exception & e) {};
	try
	{
		std::cout << COLOR_YELLOW;
		B & b = dynamic_cast<B&>(p);
		std::cout << "C'est une class B" << std::endl;
		std::cout << COLOR_NONE;
		(void)b;
		return ;
	}
	catch (std::exception & e) {};
	try
	{
		std::cout << COLOR_RED;
		C & c = dynamic_cast<C&>(p);
		std::cout << "C'est une class C" << std::endl;
		std::cout << COLOR_NONE;
		(void)c;
		return ;
	}
	catch (std::exception & e) {};
}



void	displayGenerate(std::string const & letterClass, std::string const & color)
{
	std::cout << color;
	std::cout << "******************" << std::endl;
	std::cout << "|Generate class " << letterClass  << "|" << std::endl;
	std::cout << "******************" << std::endl;
	std::cout << COLOR_NONE;
}