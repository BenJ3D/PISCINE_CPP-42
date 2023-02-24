/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 02:02:16 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/21 17:31:22 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * A attaque B et fait perdre des points de vie
*/
void	attackTarget(ClapTrap& A, ClapTrap& B)
{
	if (A.getEnergyPoints() > 0)
	{
		A.attack(B.getName());
		B.takeDamage(A.getAttackDamage());
	}
	else
		A.attack(B.getName());
}

int main( void )
{
	ClapTrap Marco;
	ClapTrap Olivier("Olivier");

			std::cout << "---------------- INITIALISATION OLIVIER & MARCO --------------" << std::endl;
	Marco.setName("Marco");
			std::cout << Marco << std::endl;
			std::cout << Olivier << std::endl;


			std::cout << "---------------- CUSTOM SET FOR MARCO --------------" << std::endl;

	Marco.setHitPoints(42);
	Marco.setAttackDamage(6);
			std::cout << Marco << std::endl;

			std::cout << "---------------- SET 50 HIT POINTS FOR OLIVIER --------------" << std::endl;
	Olivier.setHitPoints(50);
			std::cout << Olivier << std::endl;

			std::cout << "---------------- 11 ATTACK MARCO ==>> OLIVIER --------------" << std::endl;
		for (int i = 0; i < 14; i++)
		{	attackTarget(Marco, Olivier);}

			std::cout << Marco << std::endl;
			std::cout << Olivier << std::endl;

			std::cout << "---------------- OLIVIER TRY 15 REPAIRED --------------" << std::endl;
		for (int i = 0; i < 15; i++) {
			Olivier.beRepaired(1);}

			std::cout << std::endl;
			std::cout << Olivier << std::endl;

			std::cout << "---------------- NEW SETTINGS FOR MARCO --------------" << std::endl;
	Marco.setHitPoints(101);
	Marco.setAttackDamage(21);

			std::cout << "---------------- CREATE CLONE MARCO --------------" << std::endl;
	ClapTrap CloneMarco(Marco);

	CloneMarco.setName("CloneMarco");
			std::cout << Marco << std::endl;
			std::cout << CloneMarco << std::endl;

			std::cout << "---------------- CLONE MARCO NOW EQUAL OLIVIER --------------" << std::endl;
	CloneMarco = Olivier;

			std::cout << Marco << std::endl;
			std::cout << CloneMarco << std::endl;
			std::cout << Olivier << std::endl;

	return 0;
}