/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SampleMain.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:53:52 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 16:49:27 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"


int main()
{
	Sample1		instance;
	Sample1		*instancep = &instance;

	int			Sample1::*p = NULL;
	void		(Sample1::*f)(void) const;

	p = &Sample1::foo;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	
	f = &Sample1::bar;
	
	(instance.*f)();
	(instancep->*f)();
	
	return (0);
}