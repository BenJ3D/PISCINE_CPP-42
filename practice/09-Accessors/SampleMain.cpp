/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SampleMain.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:53:52 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 10:30:41 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"

int main()
{
	Sample1	instance;
	int		nb;
	char	message[512];

	std::cout << "foo : " << instance.getFoo() << std::endl;
	std::cout << "Enter unsigned int : ";
	std::cin >> nb;
	instance.setFoo(nb);
	std::cout << "foo : " << instance.getFoo() << std::endl;

	std::cout << "Enter message : ";
	std::cin >> message; //TODO Comment malloc avec un std::cin
	std::cout << "message : " << message << std::endl;
	
	return (0);
}