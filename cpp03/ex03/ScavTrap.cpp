/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:40:16 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/21 21:12:35 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << COLOR_PURPLE;
	std::cout << "ScavTrap constructor called" << std::endl;
	std::cout << COLOR_NONE;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << COLOR_PURPLE;
	std::cout << "ScavTrap constructor with name ("<< name <<") called" << std::endl;
	std::cout << COLOR_NONE;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap()
{
	_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	
	std::cout << COLOR_PURPLE;
	std::cout << "ScavTrap copy constructor called" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap( void )
{
	std::cout << COLOR_PURPLE;
	std::cout << "ScavTrap destructor called" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << COLOR_PURPLE;
	std::cout << "Scavtrap operator= called" << std::endl;
	std::cout << COLOR_NONE;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
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

void			ScavTrap::attack(const std::string& target)
{
	if (this->_attackIsPossible() == true)
	{
		std::cout << "ScavTrap " << COLOR_YELLOW << _name << COLOR_RED
				  << " attacks " << COLOR_BLUE << target << COLOR_NONE
				  << ", causing " << COLOR_RED << _attackDamage << COLOR_NONE
				  << " points of damage!"
				  << std::endl;
		this->_consumeOneEnergyPoint();
	}
	else
		std::cout << "ScavTrap " << COLOR_YELLOW << _name << COLOR_RED 
		<< " has no energy, impossible attack" << COLOR_NONE << std::endl;
}

void		ScavTrap::guardGate( void ) 
{
		std::cout << "ScavTrap " << COLOR_YELLOW << _name << COLOR_NONE << " has activated the " 
		<< COLOR_RED << "gate keeper "<< COLOR_NONE<< "mode" << std::endl;
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */