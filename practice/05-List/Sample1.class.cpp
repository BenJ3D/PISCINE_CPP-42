/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:49:07 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/31 20:52:01 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"

Sample1::Sample1(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) 
{
	
	std::cout << "a1 = " << this->a1 << std::endl;
	std::cout << "a2 = " << this->a2 << std::endl;
	std::cout << "a3 = " << this->a3 << std::endl;

	this->bar();
	return;
}

Sample1::~Sample1(void)
{
	std::cout << "Sample destructor" << std::endl;
	return;
}

void	Sample1::bar(void)
{
	
	std::cout << "Member function bar called a3 == " << this->a3 << std::endl;
	return;
}