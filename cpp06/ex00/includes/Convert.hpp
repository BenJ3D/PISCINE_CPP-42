/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:08:09 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/16 01:05:52 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <limits>
# include <iomanip>
# include <cstdlib>

class Convert
{

	public:

		Convert( void );
		Convert( const char *arg );
		Convert( Convert const & src );
		~Convert( void );

		char			getTypeC( void ) const ;
		int				getTypeInt( void ) const ;
		float			getTypeFloat( void ) const ;
		double			getTypeDouble( void ) const ;
		int				getPrecision(void) const;

		void			displayResult( void ) const;
		void			displayResult( int precision );

		Convert &		operator=( Convert const & rhs );

	private:
		char			_typeC;
		int				_typeINT;
		float			_typeFLOAT;
		double			_typeDOUBLE;
		std::string		_arg;
		int				_precision;

};

std::ostream & operator<<(std::ostream & o, Convert const & src);

#endif /* ********************************************************* CONVERT_H */