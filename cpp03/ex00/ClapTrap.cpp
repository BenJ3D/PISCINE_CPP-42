/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:30:52 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/21 21:38:49 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap( void ) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << COLOR_PURPLE;
	std::cout << "ClapTrap constructor called" << std::endl;
	std::cout << COLOR_NONE;
}

ClapTrap::ClapTrap( std::string name ) 
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << COLOR_PURPLE;
	std::cout << "ClapTrap constructor with name ("<< name <<") called" << std::endl;
	std::cout << COLOR_NONE;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	
	std::cout << COLOR_PURPLE;
	std::cout << "ClapTrap copy constructor called" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap( void )
{
	std::cout << COLOR_PURPLE;
	std::cout << "ClapTrap destructor called" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << COLOR_PURPLE;
	std::cout << "Claptrap operator= called" << std::endl;
	std::cout << COLOR_NONE;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
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

void			ClapTrap::attack(const std::string& target)
{
	if (this->_attackIsPossible() == true)
	{
		std::cout << "ClapTrap " << COLOR_YELLOW << _name << COLOR_RED
				  << " attacks " << COLOR_BLUE << target << COLOR_NONE
				  << ", causing " << COLOR_RED << _attackDamage << COLOR_NONE
				  << " points of damage!"
				  << std::endl;
		this->_consumeOneEnergyPoint();
	}
	else
		std::cout << "ClapTrap " << COLOR_YELLOW << _name << COLOR_RED 
		<< " has no energy, impossible attack" << COLOR_NONE << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	if (((int)this->_hitPoints - (int)amount) > 0)
	{
		std::cout << COLOR_YELLOW << _name << COLOR_RED
		<< " take damage " << amount << " points" << std::endl;
		std::cout << COLOR_NONE;
		this->_hitPoints -= amount;
	}
	else
	{
		std::cout << COLOR_YELLOW << _name << COLOR_RED
		<< " take damage " << amount << " points but is already dead !" << std::endl;
		std::cout << COLOR_NONE;
		this->_hitPoints = 0;
	}
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_attackIsPossible() == true)
	{
	std::cout << COLOR_YELLOW << _name << COLOR_GREEN;
	std::cout << " be repaired " << amount << " points" << std::endl;
	std::cout << COLOR_NONE;
	this->_hitPoints += amount;
	this->_consumeOneEnergyPoint();
	}
	else
		std::cout << "ClapTrap " << COLOR_YELLOW << _name << COLOR_RED 
		<< " has no energy, impossible be repaired" << COLOR_NONE << std::endl;
}


bool			ClapTrap::_attackIsPossible( void ) const
{
	if (this->_energyPoints > 0)
		return true;
	else
		return false;
}

void			ClapTrap::_consumeOneEnergyPoint( void )
{
		this->_energyPoints--;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
/******************* GET ************************/
std::string	ClapTrap::getName( void ) const {
	return this->_name;
}

unsigned int	ClapTrap::getHitPoints( void ) const {
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints( void ) const {
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamage( void ) const {
		return this->_attackDamage;
}

/******************* SET ************************/

void		ClapTrap::setName( std::string name ) {
	this->_name = name;
}

void		ClapTrap::setHitPoints(unsigned int	hitPoints ) {
	this->_hitPoints = hitPoints;
}

void		ClapTrap::setEnergyPoints(unsigned int energyPoints ) {
	this->_energyPoints = energyPoints;
}

void		ClapTrap::setAttackDamage(unsigned int attackDamage ) {
	this->_attackDamage = attackDamage;
}

/* ************************************************************************** */