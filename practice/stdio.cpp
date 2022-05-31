/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:34:57 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/31 18:45:29 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main ()
{
	char	buff[512];
	
	std::cout << "Hello World" << std::endl;

	std::cout << "Entrer un mot : ";
	std::cin >> buff;
	std::cout << "Vous avez rentrer : [" << buff << "]" << std::endl;

	return (0);
}