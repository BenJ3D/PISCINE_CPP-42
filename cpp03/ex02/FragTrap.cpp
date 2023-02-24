/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:40:16 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/27 13:38:05 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap( void ) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << COLOR_PURPLE;
	std::cout << "FragTrap constructor called" << std::endl;
	std::cout << COLOR_NONE;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << COLOR_PURPLE;
	std::cout << "FragTrap constructor with name ("<< name <<") called" << std::endl;
	std::cout << COLOR_NONE;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap()
{
	_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	
	std::cout << COLOR_PURPLE;
	std::cout << "FragTrap copy constructor called" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap( void )
{
	std::cout << COLOR_PURPLE;
	std::cout << "FragTrap destructor called" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << COLOR_PURPLE;
	std::cout << "Fragtrap operator= called" << std::endl;
	std::cout << COLOR_NONE;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
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

void			FragTrap::attack(const std::string& target)
{
	if (this->_attackIsPossible() == true)
	{
		std::cout << "FragTrap " << COLOR_YELLOW << _name << COLOR_RED
				  << " attacks " << COLOR_BLUE << target << COLOR_NONE
				  << ", causing " << COLOR_RED << _attackDamage << COLOR_NONE
				  << " points of damage!"
				  << std::endl;
		this->_consumeOneEnergyPoint();
	}
	else
		std::cout << "FragTrap " << COLOR_YELLOW << _name << COLOR_RED 
		<< " has no energy, impossible attack" << COLOR_NONE << std::endl;
}

void		FragTrap::highFivesGuys( void ) 
{
		std::cout << "FragTrap " << COLOR_YELLOW << _name << COLOR_NONE << " say " 
		<< COLOR_RED << "\"high fives guys\""<< COLOR_NONE << std::endl;
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */