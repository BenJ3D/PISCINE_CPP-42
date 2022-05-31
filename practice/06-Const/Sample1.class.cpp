/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:49:07 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/31 21:09:44 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"

Sample1::Sample1(float const f) : pi(f) 
{
	
	std::cout << "pi(f) = " << this->pi << std::endl;
	return;
}

Sample1::~Sample1(void)
{
	std::cout << "Sample destructor" << std::endl;
	return;
}

void	Sample1::bar(void) const
{
	
	std::cout << "Member function bar called pi = " << this->pi << std::endl;
	return;
}