/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 23:04:05 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/18 05:14:32 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

	public:

		Fixed( void );
		Fixed( Fixed const & src );
		Fixed( int const raw );
		Fixed( float const raw );

		~Fixed();

		Fixed &			operator=( Fixed const & rhs );
		
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		
		float			toFloat( void ) const;
		int				toInt( void ) const;

	private:
		int					_raw;
		static int const	_fract = 8;
};

std::ostream&	operator<<(std::ostream& o, Fixed const & rhs);

#endif /* *********************************************************** FIXED_H */