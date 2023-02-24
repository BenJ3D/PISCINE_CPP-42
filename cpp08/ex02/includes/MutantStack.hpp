/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:43:24 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/19 20:28:06 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iterator>
# include <stack>
# include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{

public:
	MutantStack(){};
	MutantStack(MutantStack const &src) : std::stack<T>(src){};
	virtual ~MutantStack(){};

	MutantStack<T> &operator=(MutantStack const &rhs)
	{
		if (*this == rhs)
			return (*this);
		std::stack<T>::operator=(rhs);
		return (*this);
	};
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin() { 				return (std::stack<T>::c.begin()); };
	iterator end() { 				return (std::stack<T>::c.end()); };

	reverse_iterator rbegin() { 	return (std::stack<T>::c.rbegin()); };
	reverse_iterator rend() { 		return (std::stack<T>::c.rend()); };

};

#endif /* ***************************************************** MUTANTSTACK_H */

