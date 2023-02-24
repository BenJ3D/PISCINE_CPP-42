/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 01:15:12 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/19 05:07:12 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <list>
# include <typeinfo>
# include <algorithm>
# include <limits>

# define COLOR_BLACK	"\033[0;30m"
# define COLOR_RED		"\033[0;31m"
# define COLOR_GREEN	"\033[0;32m"
# define COLOR_YELLOW	"\033[0;33m"
# define COLOR_BLUE		"\033[0;34m"
# define COLOR_PURPLE	"\033[0;35m"
# define COLOR_CYAN		"\033[0;36m"
# define COLOR_NONE		"\033[0;37m"

class Span
{

	public:

		Span( void );
		Span( unsigned int N );
		Span( Span const & src );
		~Span();

		Span &							operator=( Span const & rhs );

		unsigned int					getMaxSize( void ) const ;
		int								getValue( unsigned int index ) const;

		void							addNumber(int	number);
		unsigned int					shortestSpan( void );
		unsigned int					longestSpan( void );
		std::vector<int>::iterator		begin( void ) const ;
		std::vector<int>::iterator		end( void ) const ;
		
		template<class It>
		void							addNumber(It begin, It end)
		{
			if (this->_tab.size() < this->_maxSize)
			{
				It it = begin;
				for (; it != end; it++)
					this->addNumber(*it);
			}
			else
				throw Span::exceptionMaxSize();
		};

		class exceptionMaxSize : public std::exception
		{
			public:
			virtual char const* what( void ) const throw()
			{
				return "Span:: The maximum element has been reached";
			}
		};

		class exceptionShortestBadSize : public std::exception
		{
			public:
			virtual char const* what( void ) const throw()
			{
				return "Span::shortest: At least two elements are needed for this calculation";
			}
		};

		class exceptionLongestBadSize : public std::exception
		{
			public:
			virtual char const* what( void ) const throw()
			{
				return "Span::longest: At least two elements are needed for this calculation";
			}
		};

	private:

		std::vector<int>			_tab;
		unsigned int				_maxSize;
		std::vector<int>::iterator	_it;
		std::vector<int>::iterator	_end;
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */