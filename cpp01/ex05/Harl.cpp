/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:11:03 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/16 01:51:32 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl ( void ) {}
Harl::~Harl ( void ) {}

void	Harl::complain( std::string level ) {
	
	int	iter;
	std::string lvl[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};
		
	void (Harl::* tmp[])(void) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error};
	
	iter = -1;
	for (int i = 0; i < MAX_LEVEL; i++)
		if (lvl[i] == level)
			iter = i;

	if (iter == -1){
		std::cout << "[" << level << "]\nNot exist !" << std::endl;
		return ;
	}
	(this->*tmp[iter])();
}

void	Harl::_debug(void){
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void){
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::_warning(void){
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void){
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}