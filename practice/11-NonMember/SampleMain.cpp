/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SampleMain.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:53:52 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 16:35:14 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"


void	f0(void) {
	
	Sample1 instance;

	std::cout << "Number of instance : " << Sample1::getNbInst() << std::endl;
	return;
}

void	f1(void) {
	
	Sample1 instance;
	f0();
	std::cout << "Number of instance : " << Sample1::getNbInst() << std::endl;
	return;
}


int main()
{
	std::cout << "Number of instance : " << Sample1::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instance : " << Sample1::getNbInst() << std::endl;
	return (0);
}