/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:37:04 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/10 20:42:46 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template< typename T >
T const &	max(T const & x, T const & y) {
	return((x) <= (y) ? y : x);
}

template< typename T >
T const &	min(T const & x, T const & y) {
	return((x) <= (y) ? x : y);
}

template< typename T >
void	swap(T & x, T & y) {
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

# define COLOR_BLACK	"\033[0;30m"
# define COLOR_RED		"\033[0;31m"
# define COLOR_GREEN	"\033[0;32m"
# define COLOR_YELLOW	"\033[0;33m"
# define COLOR_BLUE		"\033[0;34m"
# define COLOR_PURPLE	"\033[0;35m"
# define COLOR_CYAN		"\033[0;36m"
# define COLOR_NONE		"\033[0;37m"



#endif /* ************************************************************ WTAH_H */