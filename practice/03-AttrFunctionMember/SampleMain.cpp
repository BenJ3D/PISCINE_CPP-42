/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SampleMain.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:53:52 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/31 20:11:28 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int main()
{
	Sample	instance;

	instance.foo = 42;
	std::cout << "instance.foo: " << instance.foo << std::endl;
	instance.bar();
	
	return (0);
}