/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 02:02:16 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/27 13:36:37 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

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
void	fragAttackTarget(FragTrap& A, FragTrap& B) //TODO:
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

void	diamAttackTarget(DiamondTrap& A, ClapTrap& B)
{
	A.attack(B.getName());
	if (A.getEnergyPoints() > 0)
		B.takeDamage(A.getAttackDamage());
}

void	diamAttackTarget(DiamondTrap& A, FragTrap& B)
{
	A.attack(B.getName());
	if (A.getEnergyPoints() > 0)
		B.takeDamage(A.getAttackDamage());
}

int main( void )
{
	FragTrap	laura("Laura");
	ClapTrap	ben("Ben");
	DiamondTrap	diamond("Diamond");

	std::cout << laura << std::endl;
	std::cout << ben << std::endl;
	std::cout << diamond << std::endl;

	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.whoAmI();
			std::cout << "---------------- SET LAURA & BEN --------------" << std::endl;

	ben.setHitPoints(100);
	laura.setEnergyPoints(200);
	std::cout << laura << std::endl;
	std::cout << ben << std::endl;
	std::cout << diamond << std::endl;
	

	fragAttackTarget(laura, ben);
	diamAttackTarget(diamond, laura);

	std::cout << laura << std::endl;
	std::cout << ben << std::endl;
	std::cout << diamond << std::endl;

	return 0;
}