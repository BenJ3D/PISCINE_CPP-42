/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:40:16 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/21 21:57:46 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{

	public:

		FragTrap();
		FragTrap( FragTrap const & src );
		FragTrap( std::string name );
		~FragTrap();

		void			attack(const std::string& target);
		void			highFivesGuys( void );

		FragTrap &		operator=( FragTrap const & rhs );

};

std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */