/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:40:16 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/21 18:04:28 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap( std::string name );
		~ScavTrap();

		void			attack(const std::string& target);
		void			guardGate( void );

		ScavTrap &		operator=( ScavTrap const & rhs );

};

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */