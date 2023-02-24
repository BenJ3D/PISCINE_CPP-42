/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:40:16 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/21 23:53:45 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
class DiamondTrap : public FragTrap, public ScavTrap
{

	public:

		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		DiamondTrap( std::string name );
		~DiamondTrap();

		void				attack(const std::string& target);
		void				whoAmI( void );

		DiamondTrap &		operator=( DiamondTrap const & rhs );
	private:
		std::string			_name;
};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */