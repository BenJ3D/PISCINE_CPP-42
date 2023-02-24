/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 23:04:05 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/18 05:07:29 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

	public:

		Fixed( void );
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &			operator=( Fixed const & rhs );
		
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		
	private:
		int					_raw;
		static int const	_fract = 8;
};

#endif /* *********************************************************** FIXED_H */