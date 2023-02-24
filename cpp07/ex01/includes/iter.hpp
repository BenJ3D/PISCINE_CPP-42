/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:03:15 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/16 18:56:28 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>
# include <string>
# include <limits>

template <typename T>
void	iter(T *array, size_t const size, void (*function)(const T&))
{
	for (size_t i = 0; i < size; i++)
		function(array[i]);
}

template <typename T>
void	iter(T *array, size_t const size, void (*function)( T&))
{
	for (size_t i = 0; i < size; i++)
		function(array[i]);
}

template <typename T>
void	displayValue(T const & value)
{
	std::cout << "Value = " << value << std::endl;
}

template <typename T>
void	toZero(T & value)
{
	value = 0;
}

template <typename T>
void	multiplyBy42(T & value)
{
	value *= 42;
}

# define COLOR_BLACK	"\033[0;30m"
# define COLOR_RED		"\033[0;31m"
# define COLOR_GREEN	"\033[0;32m"
# define COLOR_YELLOW	"\033[0;33m"
# define COLOR_BLUE		"\033[0;34m"
# define COLOR_PURPLE	"\033[0;35m"
# define COLOR_CYAN		"\033[0;36m"
# define COLOR_NONE		"\033[0;37m"

#endif