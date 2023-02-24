/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:12:41 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/29 18:57:53 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << COLOR_PURPLE;
	std::cout << "Constructor called " << COLOR_GREEN << "[Brain]" << std::endl;
	std::cout << COLOR_NONE;
}

Brain::Brain( const Brain & src )
{
	std::cout << COLOR_PURPLE;
	std::cout << "Constructor copy called "<< COLOR_GREEN << "[Brain]" << std::endl;
	std::cout << COLOR_NONE;

	for (int i = 0; i < MAX_IDEAS; i++)
		this->ideas[i] = src.ideas[i];
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << COLOR_PURPLE;
	std::cout << "Destructor called "<< COLOR_GREEN << "[Brain]" << std::endl;
	std::cout << COLOR_NONE;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain&				Brain::operator=( Brain const & rhs )
{
	for (int i = 0; i < MAX_IDEAS; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				Brain::setIdea( int index, std::string idea) {
	if (index > MAX_IDEAS || index < 0)
		std::cerr << "Error: index is not found" << std::endl;
	else
	{
		this->ideas[index].clear();
		this->ideas[index] = idea;
	}
}

const std::string&	Brain::getIdea( int index ) const {
	if (index > MAX_IDEAS || index < 0)
		std::cerr << "Error: index is not found" << std::endl;
	return this->ideas[index];
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */