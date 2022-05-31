/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:49:07 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/31 18:52:40 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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