/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:24:03 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/13 00:47:47 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "./Weapon.hpp"

class HumanA {
	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );
		void	attack() const;
		
	private:
		std::string			_name;
		Weapon&				_weapon;

};

#endif