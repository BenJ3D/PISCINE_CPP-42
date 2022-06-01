/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SampleMain.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:53:52 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 08:35:00 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"

int main()
{
	Sample1	instance;
	
	instance.publicFoo = 42;
	std::cout << "instance.publicFoo : " << instance.publicFoo << std::endl;

	// instance._privateFoo = 42;
	// std::cout << "instance._privateFoo : " << instance._privateFoo << std::endl;	

	instance.publicBar();
	return (0);
}