/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:58:15 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/17 18:56:24 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <algorithm>


template <typename T>
bool	easyfind(T & cont, int nb)
{
	typename T::iterator retIterator = std::find(cont.begin(), cont.end(), nb);
	
	if (retIterator == cont.end())
		return false;
	else
		return true;
}


#endif

