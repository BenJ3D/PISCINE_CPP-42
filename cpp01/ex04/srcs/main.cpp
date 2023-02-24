/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 01:58:51 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/15 23:16:01 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Sed.hpp"

int	main(int ac, char **av)
{
	if (ac != 4) { 
		std::cerr << "Erreur : Entrer <filname> <s1> <s2>" << std::endl; return 1;}
	else
	{
		Sed sed(av[1], av[2], av[3]);
		if(sed.startSed())
			return 1;
	}
	// UTILISATION EN FT EXEMPLE //
	// ac = 0; //anti flag error
	// av = NULL; //anti flag error
	// Sed sed;
	
	// sed.setFile("file/unix");
	// sed.setS1("Unix");
	// sed.setS2("Windows12");
	// sed.startSed();
	return 0;
}

