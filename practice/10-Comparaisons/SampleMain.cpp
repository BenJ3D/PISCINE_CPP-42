/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SampleMain.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:53:52 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 14:49:37 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"

int main()
{
	Sample1	instance1(42);
	Sample1	instance2(42);

	if ( &instance1 == &instance1)
		std::cout << "instance1 est physiquement egal a instance1" << std::endl;
	else
		std::cout << "instance1 n'est pas physiquement egal a instance1" << std::endl;
	if (&instance1 == &instance2)
		std::cout << "instance1 est physiquement egal a instance2" << std::endl;
	else
		std::cout << "instance1 n'est pas physiquement egal a instance2" << std::endl;


	if ( instance1.compare(&instance1) == 0)
		std::cout << "instance1 est structurellement egal a instance1" << std::endl;
	else
		std::cout << "instance1 n'est pas structurellement egal a instance1" << std::endl;
	if ( instance1.compare(&instance2) == 0)
		std::cout << "instance1 est structurellement egal a instance2" << std::endl;
	else
		std::cout << "instance1 n'est pas structurellement egal a instance2" << std::endl;

	return (0);
}