/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:17:45 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/02 01:26:06 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.class.cpp"

int main (void)
{
	Ben				ben;
	std::string		cmd;

	std::cin >> cmd;

	if (cmd.compare("ADD") == 0)
		std::cout << "Go to ADD fonction" << std::endl;
	else if (cmd.compare ("EXIT") == 0)
		std::cout << "Go to EXIT fonction" << std::endl;
	else
		std::cout << "Putain mais ecrit quelque chose bordel de merde !" << std::endl;
	
	
	return (0);
}