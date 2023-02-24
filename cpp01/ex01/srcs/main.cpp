/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 06:09:12 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/12 22:02:42 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#define ZOMBIE_NB 8

int	main(void)
{
	Zombie *horde;

	horde = zombieHorde(ZOMBIE_NB, "Zombie");
	for (int i = 0; i < ZOMBIE_NB; i++)
		horde[i].announce();

	delete [] horde;
	return 0;
}