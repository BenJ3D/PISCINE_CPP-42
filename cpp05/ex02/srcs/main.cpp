/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 00:47:20 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/08 00:58:39 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

void	pstr(std::string str);
void	tryUpGrade( Bureaucrat& ref );
void	displayGrade(Bureaucrat& ref);
void	tryDownGrade( Bureaucrat& ref );

int main(void)
{
	try
	{
		/**----------- TEST 1 ---------------*/
		{
			pstr("TEST 1 : Creations des formulaires, signatures puis executions");
			Bureaucrat bob("bob", 136);
			Bureaucrat ted("ted", 145);
			ShrubberyCreationForm Form1("Jardin");
			ShrubberyCreationForm Form2("Salon");
			std::cout << bob << std::endl;
			std::cout << ted << std::endl;
			std::cout << Form1 << std::endl;
			std::cout << Form2 << std::endl;
			try
			{
				bob.executeForm(Form1);
				bob.executeForm(Form2);
				ted.signForm(Form1);
				bob.signForm(Form2);
				std::cout << Form1 << std::endl;
				std::cout << Form2 << std::endl;
				ted.executeForm(Form1);
				bob.executeForm(Form1);
				bob.executeForm(Form2);
			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		/**----------- TEST 2 ---------------*/
		{
			pstr("\nTEST 2 : Formulaires RobotomyRequestForm");
			Bureaucrat bob("bob", 1);
			RobotomyRequestForm Form1("Robot");
			RobotomyRequestForm Form2("Box");
			try
			{
				std::cout << bob << std::endl;
				std::cout << Form1 << std::endl;
				std::cout << Form2 << std::endl;
				bob.executeForm(Form1);
				bob.executeForm(Form2);
				bob.signForm(Form1);
				bob.signForm(Form2);
				std::cout << Form1 << std::endl;
				std::cout << Form2 << std::endl;
				bob.executeForm(Form1);
				bob.executeForm(Form1);
				bob.executeForm(Form1);
				bob.executeForm(Form1);
				bob.executeForm(Form2);
				bob.executeForm(Form2);
				bob.executeForm(Form2);
				bob.executeForm(Form2);
			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		/**----------- TEST 3 ---------------*/
		{
			pstr("\nTEST 2 : Formulaires PresidentialPardonForm");
			Bureaucrat biden("Biden", 1);
			PresidentialPardonForm Form1("Sam Bankman-Fried");
			try
			{
				std::cout << biden << std::endl;
				std::cout << Form1 << std::endl;
				biden.executeForm(Form1);
				biden.signForm(Form1);
				std::cout << Form1 << std::endl;
				biden.executeForm(Form1);

			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
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
