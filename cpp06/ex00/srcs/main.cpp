/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:36:21 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/16 01:04:18 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Convert.hpp"
# define COLOR_PURPLE	"\033[0;35m"
# define COLOR_NONE		"\033[0;37m"

int	main(int ac, char **av)
{
	if (ac < 2 || av[1][0] == '\0')
	{
		std::cout << "Please enter one litteral c++ type int/float or double" << std::endl;
		return 1;
	}
	
	Convert convert(av[1]);

	std::cout << convert << std::endl;

	//permet de definir la precision des float/double puis affiche les results
	// std::cout << COLOR_PURPLE
	// << "\n\nMeme chose mais avec reglage precision sur \"2\"" << std::endl;
	// std::cout << COLOR_NONE;
	// convert.displayResult(2);

	return 0;
}