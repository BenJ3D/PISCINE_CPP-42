/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 02:02:16 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/21 21:53:01 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

/**
 * A attaque B et fait perdre des points de vie
*/
void	attackTarget(ClapTrap& A, ClapTrap& B)
{
	A.attack(B.getName());
	if (A.getEnergyPoints() > 0)
		B.takeDamage(A.getAttackDamage());
}

/**
 * A attaque B et fait perdre des points de vie
*/
void	scavAttackTarget(ScavTrap& A, ClapTrap& B)
{
	A.attack(B.getName());
	if (A.getEnergyPoints() > 0)
		B.takeDamage(A.getAttackDamage());
}

/**
 * A attaque B et fait perdre des points de vie
*/
void	fragAttackTarget(FragTrap& A, ClapTrap& B)
{
	A.attack(B.getName());
	if (A.getEnergyPoints() > 0)
		B.takeDamage(A.getAttackDamage());
}

int main( void )
{
	FragTrap	laura("Laura");
	ClapTrap	ben("Ben");

	std::cout << laura << std::endl;
	std::cout << ben << std::endl;

			std::cout << "---------------- SET LAURA & BEN --------------" << std::endl;

	ben.setHitPoints(100);
	laura.setEnergyPoints(200);
	std::cout << laura << std::endl;
	std::cout << ben << std::endl;
	

	fragAttackTarget(laura, ben);
	fragAttackTarget(laura, ben);
	fragAttackTarget(laura, ben);

	std::cout << laura << std::endl;
	std::cout << ben << std::endl;

	ben.beRepaired(140);
	std::cout << ben << std::endl;

	laura.highFivesGuys();

	for(int i = 0; i < 5; i++)
		fragAttackTarget(laura, ben);

	std::cout << laura << std::endl;
	std::cout << ben << std::endl;

	return 0;
}