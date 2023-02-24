/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:03:15 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/13 17:27:35 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdio>
# include <cstdlib>

# define COLOR_BLACK	"\033[0;30m"
# define COLOR_RED		"\033[0;31m"
# define COLOR_GREEN	"\033[0;32m"
# define COLOR_YELLOW	"\033[0;33m"
# define COLOR_BLUE		"\033[0;34m"
# define COLOR_PURPLE	"\033[0;35m"
# define COLOR_CYAN		"\033[0;36m"
# define COLOR_NONE		"\033[0;37m"


template <typename T>
class Array
{

	public:

		Array( void );
		Array( Array<T> & src );
		Array(unsigned int n);
		~Array( void );

		Array<T> &		operator=( Array<T> & rhs );
		T				operator[]( unsigned int index ) const;
		T		&		operator[]( unsigned int index );

		unsigned int	size() const{ return (this->_size); };

		class IndexOverflow : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("\033[0;33mIndex is out of range\033[0;37m");
				}
		};

	private:
		T				*_array;
		unsigned int	_size;
		bool			_delarr;

};

/******************* CONSTRUCTOR ***********************/

template <typename T>
Array<T>::Array( void ) {

	this->_size = 1;
	this->_array = new T();
	this->_delarr = false;
}

template <typename T>
Array<T>::Array( Array<T> & src ) {

	this->_array = new T[src.size()];
	*this = src;
	this->_delarr = true;

}

template <typename T>
Array<T>::Array( unsigned int n ) : _size(n) {

	this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->_array[i] = 0;
	this->_delarr = true;

}

/******************* DESTRUCTOR ***********************/
template<typename T>
Array<T>::~Array()
{
	if (this->_delarr == true)
		delete [] this->_array;
	else
		delete this->_array;
}

/******************* OPERATOR OVERLOAD ***********************/
template<typename T>
Array<T> &		Array<T>::operator=( Array<T> & rhs ){

	for(unsigned int i = 0; i < rhs.size(); i++)
				this->_array[i] = rhs[i];
	this->_size = rhs.size();
	return *this;
};

template<typename T>
std::ostream & operator<<(std::ostream & o, Array<T> const & rhs)
{
	o << rhs[0];
	return (o);
}

template<typename T>
T Array<T>::operator[]( unsigned int index ) const {

	if (index >= this->size())
		throw (Array::IndexOverflow());
	return (this->_array[index]);

};

template<typename T>
T & Array<T>::operator[]( unsigned int index ){

	if (index >= this->size())
		throw (Array::IndexOverflow());
	return *(this->_array + index);

};


#endif
