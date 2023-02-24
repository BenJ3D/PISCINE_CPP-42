/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:08:09 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/16 00:59:06 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert( void ) 
:
_typeC(0),
_typeINT(0),
_typeFLOAT(0),
_typeDOUBLE(0),
_precision(1)
{}

Convert::Convert(const char *arg) : _arg(arg), _precision(1)
{
	double tmp;

	if (_arg.length() == 1 && !isdigit(static_cast<int>(_arg[0])))
		tmp = static_cast<double>(_arg[0]);
	else
		tmp = strtod(_arg.c_str(), NULL);

	this->_typeC = static_cast<char>(tmp);
	this->_typeINT = static_cast<int>(tmp);
	this->_typeFLOAT = static_cast<float>(tmp);
	this->_typeDOUBLE = static_cast<double>(tmp);
}

Convert::Convert( const Convert & src )
{
	this->_typeC = src.getTypeC();
	this->_typeINT = src.getTypeInt();
	this->_typeFLOAT = src.getTypeFloat();
	this->_typeDOUBLE = src.getTypeDouble();
	this->_precision = src.getPrecision();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &				Convert::operator=( Convert const & rhs )
{
	if ( this != &rhs )
	{
		this->_typeC = rhs.getTypeC();
		this->_typeINT = rhs.getTypeInt();
		this->_typeFLOAT = rhs.getTypeFloat();
		this->_typeDOUBLE = rhs.getTypeDouble();
		this->_precision = rhs.getPrecision();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Convert::displayResult(void) const
{
	std::cout << *this << std::endl;
}

void Convert::displayResult( int precision )
{
	this->_precision = precision;
	std::cout << *this << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
char Convert::getTypeC(void) const
{
	return this->_typeC;
}

int Convert::getTypeInt(void) const
{
	return this->_typeINT;
}

float Convert::getTypeFloat(void) const
{
	return this->_typeFLOAT;
}

double Convert::getTypeDouble(void) const
{
	return this->_typeDOUBLE;
}

int Convert::getPrecision(void) const
{
	return this->_precision;
}

/* ************************************************************************** */

std::ostream &operator<<(std::ostream &o, Convert const &src)
{
	o << std::fixed << std::setprecision(src.getPrecision());
	
	if (src.getTypeDouble() >= std::numeric_limits<char>::min() 
	&& src.getTypeDouble() <= std::numeric_limits<char>::max())
	{
		if (src.getTypeC() >= 0 && src.getTypeC() < 127)
		{
			if (src.getTypeC() >= 32 && src.getTypeC() <= 126)
				o << "char: '" << src.getTypeC() << "'" << std::endl;
			else
				o << "char: Non displayable" << std::endl;
		}
		else
			o << "char: impossible" << std::endl;
	}
	else
		o << "char: impossible" << std::endl;
	if (src.getTypeDouble() >= std::numeric_limits<int>::min() 
	&& src.getTypeDouble() <= std::numeric_limits<int>::max())
		o << "int: " << src.getTypeInt() << std::endl;
	else
		o << "int: impossible" << std::endl;
	o << "float: " << src.getTypeFloat() << "f" << std::endl;
	o << "double: " << src.getTypeDouble();

	return o;
}
