/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:40:16 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/17 15:53:27 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap( void )
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << COLOR_PURPLE;
	std::cout << "DiamondTrap constructor called" << std::endl;
	std::cout << COLOR_NONE;
}

DiamondTrap::DiamondTrap( std::string name )
{
	
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << COLOR_PURPLE;
	std::cout << "DiamondTrap constructor with name ("<< name <<") called" << std::endl;
	std::cout << COLOR_NONE;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )  : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	
	std::cout << COLOR_PURPLE;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	std::cout << COLOR_NONE;

	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap( void )
{
	std::cout << COLOR_PURPLE;
	std::cout << "DiamondTrap destructor called" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << COLOR_PURPLE;
	std::cout << "Diamondtrap operator= called" << std::endl;
	std::cout << COLOR_NONE;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i )
{
	o << COLOR_YELLOW << i.getName() << " :\n"
	<< COLOR_GREEN
	<< "	- Hit Points = " << i.getHitPoints() 
	<< COLOR_RED
	<< "\n	- Attack Damage = " << i.getAttackDamage() 
	<< COLOR_CYAN
	<< "\n	- Energy Points = " << i.getEnergyPoints() << std::endl
	<< COLOR_NONE;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		DiamondTrap::whoAmI( void ) 
{
	std::cout << "DiamondTrap " << COLOR_YELLOW << _name << COLOR_NONE << " and ClapTrap sub-object " 
	<< COLOR_YELLOW << ClapTrap::_name << COLOR_NONE << std::endl;
}

void			DiamondTrap::attack(const std::string& target)
{
	FragTrap::attack(target);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */