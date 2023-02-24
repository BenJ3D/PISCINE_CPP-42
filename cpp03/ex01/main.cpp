/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 02:02:16 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/21 21:01:42 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

int main( void )
{
	ClapTrap	bob("bob");
	ScavTrap	robot("bubble");

	std::cout << std::endl;
	std::cout << robot << std::endl;
	std::cout << bob << std::endl;
	std::cout << std::endl;

	attackTarget(bob, robot);
	robot.guardGate();
	scavAttackTarget(robot, bob);

	std::cout << std::endl;
	std::cout << robot << std::endl;
	std::cout << bob << std::endl;
	std::cout << std::endl;

	scavAttackTarget(robot, bob);
	scavAttackTarget(robot, bob);

	std::cout << std::endl;
	std::cout << robot << std::endl;
	std::cout << bob << std::endl;
	std::cout << std::endl;

	return 0;
}