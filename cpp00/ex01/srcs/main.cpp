/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:47:18 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/12 04:16:20 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void	welcome(void)
{
	std::cout << "                                                                                             " << std::endl;
	std::cout << "  @@@@@@@@%    /@@%                                                                          " << std::endl;
	std::cout << "  @@@.  %@@@*  /@@%                                                                          " << std::endl;
	std::cout << "  @@@.  .@@@*  /@@% @@@@       ,@@@@#     .@@@ %@@@       /@@@@.                             " << std::endl;
	std::cout << "  @@@@@@@@@.   /@@@&.#@@@(   @@@@*,@@@@   .@@@@,/@@@&   @@@   /@@#                           " << std::endl;
	std::cout << "  @@@,         /@@%   /@@%  *@@@    (@@#  .@@@   ,@@&  (@@@@@@@@@@.                          " << std::endl;
	std::cout << "  @@@,         /@@%   /@@%   @@@&  #@@@   .@@@   ,@@&   @@@.  .%*                            " << std::endl;
	std::cout << "  @@@,         /@@%   /@@%     &@@@@@.    .@@@   ,@@&    .@@@@@@.                            " << std::endl;
	std::cout << "                                                                                             " << std::endl;
	std::cout << "                                                                                             " << std::endl;
	std::cout << "                                         (@@@@@@@@*                               @@@        " << std::endl;
	std::cout << "                                         (@@@   @@@,                              @@@        " << std::endl;
	std::cout << "                                         (@@@@@@@@#     .@@@@@@*      /@@@@@&     @@@  .@@@# " << std::endl;
	std::cout << "                                         (@@@@@@@@@@   @@@#  *@@@.  /@@@.  @@@@   @@@ @@@&   " << std::endl;
	std::cout << "                                         (@@@    @@@& *@@@    /@@%  @@@     @@@   @@@,@@@    " << std::endl;
	std::cout << "                                         (@@@@@@@@@@.  %@@@%#@@@@    @@@@#%@@@@   @@@  &@@@  " << std::endl;
	std::cout << "                                         *@@@@@@,        #@@@%*        #@@@%*     @@@    @@@." << std::endl;
	std::cout << "                                                                                             " << std::endl;
	std::cout << "                                           WELCOME\n                                         " << std::endl;
	std::cout << "   ADD : to add a new contact\n   SEARCH : to display a contact\n   EXIT : ...to exit :D\n\n   Note that the PhoneBook \
size is currently " << MAX_CONTACT << ", beyond that,\n     the oldest will be replaced by the new contact.\n" << std::endl;
}

int	main(void)	
{
	PhoneBook	book;
	std::string	line;
	
	welcome();
	while (1)
	{
		std::cout << "phonebook> ";
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0)
			book.add();
		else if (line.compare("SEARCH") == 0)
			book.search();
		else if (line.compare("EXIT") == 0)
			break ;
		if (std::cin.eof())
			return (std::cerr << std::endl << "CTRL+D EXIT" << std::endl, 1);
	}
	return (0);
}