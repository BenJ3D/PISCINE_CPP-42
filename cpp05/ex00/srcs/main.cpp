/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:59:03 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/04 01:37:44 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

void	pstr(std::string str);
void	tryUpGrade( Bureaucrat& ref );
void	displayGrade(Bureaucrat& ref);
void	tryDownGrade( Bureaucrat& ref );

int main(void)
{
		/**----------- TEST 1 ---------------*/
	{
		pstr("TEST 1 : Déclaration Bureaucrats avec un grade trop haut :");
		try
		{
			Bureaucrat toto("toto", 0);
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			Bureaucrat toto("toto", -42);
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
		/**----------- TEST 2 ---------------*/
	{
		pstr("\nTEST 2 : Déclaration Bureaucrats avec un grade trop bas :");
			try
		{
			Bureaucrat toto("toto", 151);
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Bureaucrat toto("toto", 245);
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
		/**----------- TEST 3 ---------------*/
	{
		pstr("\nTEST 3 : DownGrade un Bureaucrat jusqu'au minimum autorisé [150]");
		try
		{
			Bureaucrat toto("toto", 145);
			displayGrade(toto);
			try
			{
				tryDownGrade(toto); //146
				tryDownGrade(toto); //147
				tryDownGrade(toto); //148
				tryDownGrade(toto); //149
				tryDownGrade(toto); //150
				tryDownGrade(toto); //151 /!\ TROP BAS ==> catch exception
				tryDownGrade(toto); 
				tryDownGrade(toto);
				tryDownGrade(toto);
				tryDownGrade(toto);
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
		/**----------- TEST 4 ---------------*/
	{
		pstr("\nTEST 4 : UpGrade un Bureaucrat jusqu'au maximum autorisé [1]");
		try
		{
			Bureaucrat toto("toto", 3);
			displayGrade(toto);
			try
			{
				tryUpGrade(toto); //2
				tryUpGrade(toto); //1
				tryUpGrade(toto); //0 /!\ TROP HAUT ==> catch exception
				tryUpGrade(toto);
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
	pstr("END OF MAIN TEST");
	return 0;
}

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
