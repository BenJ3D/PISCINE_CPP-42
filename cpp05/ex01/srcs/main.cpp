/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 00:47:29 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/08 00:47:31 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

void	pstr(std::string str);
void	tryUpGrade( Bureaucrat& ref );
void	displayGrade(Bureaucrat& ref);
void	tryDownGrade( Bureaucrat& ref );

int main(void)
{
		/**----------- TEST 1 ---------------*/
	{
		pstr("TEST 1 : deux bureaucrate avec niveau differents qui essaient de signer un formulaire");
		try
		{
			Bureaucrat	master("El Patron", 2);
			Bureaucrat	slave("El Esclavo", 42);
			Form		f01("Formulaire f01", 3, 42);
			std::cout << master << std::endl;
			std::cout << slave << std::endl;
			std::cout << f01 << std::endl;
			try {
				slave.signForm(f01);
				std::cout << f01 << std::endl;
				master.signForm(f01);
				std::cout << f01 << std::endl;
				master.signForm(f01);
			}
			catch (std::exception const &e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
		/**----------- TEST 2 ---------------*/
	{
		pstr("\n\nTEST 2 : un bureaucrate upgrade de niveau pour pouvoir signer le formulaire");
		try
		{
			Bureaucrat	bob("Bob", 23);
			Form		f02("Formulaire f02-440", 21, 42);
			std::cout << bob << std::endl;
			std::cout << f02 << std::endl;
			try {
					bob.signForm(f02);
					bob.upGrade();
					std::cout << bob << std::endl;
					bob.upGrade();
					std::cout << bob << std::endl;
					bob.upGrade();
					std::cout << bob << std::endl;
					bob.signForm(f02);
					std::cout << f02 << std::endl;
			}
			catch (std::exception const &e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
		/**----------- TEST 3 ---------------*/
	{
		pstr("\n\nTEST 3 : creations formulaires avec des grades invalides");
		try
		{
			Form		f03("Formulaire f03-845", 0, 42);
			std::cout << f03 << std::endl;
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Form		f04("Formulaire f04-345", 151, 42);
			std::cout << f04 << std::endl;
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Form		f05("Formulaire f05-987", 42, 151);
			std::cout << f05 << std::endl;
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	pstr("END OF MAIN TEST");
	return 0;
}



//\\\\\\\\***********************************************\\\\\\\\\\\|
//\\\\\\\\***********************************************\\\\\\\\\\\|
//\\\\\\\\***********************************************\\\\\\\\\\\|
//\\\\\\\\***********************************************\\\\\\\\\\\|

void	pstr(std::string str)
{
	std::cout << COLOR_PURPLE << str << COLOR_NONE << std::endl;
}

void	displayGrade(Bureaucrat& ref)
{
	std::cout << "   " << ref << std::endl;
}

void	tryDownGrade( Bureaucrat& ref )
{
	std::cout 
	<< COLOR_CYAN << "[" << ref.getName() << "] "
	<< COLOR_RED << "Try DownGrade" << COLOR_NONE << std::endl;
	
	ref.downGrade();
	displayGrade(ref);
}

void	tryUpGrade( Bureaucrat& ref )
{
	std::cout 
	<< COLOR_CYAN << "[" << ref.getName() << "] "
	<< COLOR_GREEN << "Try UpGrade" << COLOR_NONE << std::endl;
	ref.upGrade();
	displayGrade(ref);
}
