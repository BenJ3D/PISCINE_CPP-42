/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:24:47 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 17:59:10 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i;
	int	y;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for(i = 1; i < ac; i++)
			for(y = 0; av[i][y]; y++)
				std::cout << (char)std::toupper(av[i][y]);
	std::cout << std::endl;
	return 0;
}