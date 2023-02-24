/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 01:15:12 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/19 04:43:32 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span( void ) : _tab(0), _maxSize(0), _it(_tab.begin()), _end(_tab.end())
{
}

Span::Span(unsigned int N) : _tab(0), _maxSize(N), _it(_tab.begin()), _end(_tab.end())
{
	
}

Span::Span(const Span &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &Span::operator=(Span const &rhs)
{
	if ( this != &rhs )
	{
		for (long unsigned int i = 0; i < rhs._tab.size(); i++)
			this->_tab.push_back(rhs._tab[i]);
		this->_maxSize = rhs._maxSize;
		this->_it = this->_tab.begin();
		this->_end = this->_tab.end();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int number)
{
	if (this->_tab.size() < this->_maxSize)
	{
		this->_tab.push_back(number);
		this->_it = this->_tab.begin();
		this->_end = this->_tab.end();
	}
	else
		throw Span::exceptionMaxSize();
}




unsigned int Span::shortestSpan(void)
{
	if (this->_tab.size() <= 1)
		throw Span::exceptionShortestBadSize();
	std::vector<int>::iterator it = this->_tab.begin();
	std::vector<int>::iterator yt;
	std::vector<int>::iterator end = this->_tab.end();

	int tmp = std::numeric_limits<int>::max();
	int	tmp2 = 0;

	for (; it != end; it++)
	{
		yt = this->_tab.begin();
		for (; yt != it; yt++)
		{
			if (yt == it)
			{
				if (yt + 1 == end)
					break;
				yt++;
			}
			tmp2 = *it - *yt;
			if (tmp2 < 0)
				tmp2 *= -1;
			if (tmp2 < tmp)
				tmp = tmp2;
		}
	}
	return tmp;
}

unsigned int	Span::longestSpan(void)
{
	if (this->_tab.size() <= 1)
		throw Span::exceptionLongestBadSize();
	std::vector<int>	tmp = this->_tab;
	std::sort(tmp.begin(), tmp.end());
	return (static_cast<unsigned int>(tmp.back() - tmp.front()));
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	
	for (std::vector<int>::iterator it = i.begin(); it != i.end(); it++)
		o << "Span[" << (it - i.begin()) << "] = " << *it << std::endl;
	return o;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int Span::getMaxSize( void ) const
{
	return this->_maxSize;
}

int Span::getValue( unsigned int index ) const
{
	return (this->_tab[index]);
}

std::vector<int>::iterator Span::begin( void ) const
{
	return this->_it;
}

std::vector<int>::iterator Span::end( void ) const
{
	return this->_end;
}


/* ************************************************************************** */