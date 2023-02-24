/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:11:42 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/16 01:46:08 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# define MAX_LEVEL 4

# include <iostream>

class Harl {
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );


	private:
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
};

#endif