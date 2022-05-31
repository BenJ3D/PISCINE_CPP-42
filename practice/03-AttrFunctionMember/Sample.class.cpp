/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:49:07 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/31 20:09:46 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void) 
{
	std::cout << "Sample constructor" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Sample destructor" << std::endl;
	return;
}

void	Sample::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return;
}