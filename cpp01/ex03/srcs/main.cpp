/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 06:09:12 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/16 00:14:38 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"

int	main(void)
{
	//main test sujet
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	std::cout << "\n\n" << std::endl;
	//my test
	{
		Weapon pistolet = Weapon("a gun");
		Weapon knife = Weapon("a knife");
		Weapon rocket = Weapon("a rocket launcher");
		HumanB ben("ben");
		HumanA bob("bob", rocket);

		ben.attack();
		std::cout << "finds a weapon on the ground and picks it up" << std::endl;
		ben.setWeapon(pistolet);
		ben.attack();
		ben.attack();
		std::cout << "no more ammunition... he falls back on the knife not far away... " << std::endl;
		ben.setWeapon(knife);
		ben.attack();
		ben.attack();
		bob.attack();
		std::cout << "ben is dead. RIP." << std::endl;
	}
	
	return 0;
}