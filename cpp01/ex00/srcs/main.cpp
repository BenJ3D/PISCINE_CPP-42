/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 06:09:12 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/16 00:46:29 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	// cree une variable zombie puis le fait se presenter
	Zombie z1("Zombie1");
	z1.announce();
	
	/**	
	 * Crée un zombie, lui donne un nom et le retourne afin qu'il puisse être utilisé en
	 * dehors de la portée de la fonction.
	 * Libere le Zombie avec delete (equivalent free en cpp)
	 */
	Zombie *z2 = newZombie("Zombie2");
	z2->announce();
	delete z2;
	
	//cree un zombie, lui donne un nom et le fait se presenter
	randomChump("ZombieRandom");

	
	return 0;
}