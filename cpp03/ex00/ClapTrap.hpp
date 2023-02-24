/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:30:52 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/21 21:07:31 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		~ClapTrap( void );

		std::string		getName( void ) const;
		unsigned int	getHitPoints( void ) const;
		unsigned int	getEnergyPoints( void ) const;
		unsigned int	getAttackDamage( void ) const;

		void			setName( std::string name );
		void			setHitPoints(unsigned  int hitPoints );
		void			setEnergyPoints(unsigned  int energyPoints );
		void			setAttackDamage(unsigned  int attackDamage );

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);


		ClapTrap &		operator=( ClapTrap const & rhs );

	private:

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

		bool			_attackIsPossible( void ) const;
		void			_consumeOneEnergyPoint( void );

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

# define COLOR_BLACK	"\033[0;30m"
# define COLOR_RED		"\033[0;31m"
# define COLOR_GREEN	"\033[0;32m"
# define COLOR_YELLOW	"\033[0;33m"
# define COLOR_BLUE		"\033[0;34m"
# define COLOR_PURPLE	"\033[0;35m"
# define COLOR_CYAN		"\033[0;36m"
# define COLOR_NONE		"\033[0;37m"

#endif /* ******************************************************** CLAPTRAP_H */