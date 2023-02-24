/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 06:09:19 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/12 21:22:15 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *tmpZ;

	tmpZ = new Zombie[N];
	for (int i = 0; i < N; i++)
		tmpZ[i].setName(name);
	return (tmpZ);
}