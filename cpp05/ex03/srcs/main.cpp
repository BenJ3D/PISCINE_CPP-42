
#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

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
			pstr("TEST 1 : Creations des formulaires avec Intern, signatures puis executions");
			Bureaucrat bob("bob", 1);

			try
			{
				Bureaucrat bob("bob", 1);
				Bureaucrat doggy("doggy", 150);
				Intern someRandomIntern;
				AForm *rrf;
				AForm *rrf2;
				AForm *rrf3;
				AForm *rrf4;
				rrf = someRandomIntern.makeForm("shrubbery creation", "Terrain");
				rrf2 = someRandomIntern.makeForm("robotomy request", "Bender");
				rrf3 = someRandomIntern.makeForm("presidential pardon", "bob");
				rrf4 = someRandomIntern.makeForm("inconnu", "blabla");
				std::cout << *rrf << std::endl;
				std::cout << *rrf2 << std::endl;
				std::cout << *rrf3 << std::endl;
				doggy.signForm(*rrf);
				bob.signForm(*rrf);
				bob.signForm(*rrf2);
				bob.signForm(*rrf3);
				std::cout << *rrf << std::endl;
				std::cout << *rrf2 << std::endl;
				std::cout << *rrf3 << std::endl;
				bob.executeForm(*rrf);
				bob.executeForm(*rrf2);
				bob.executeForm(*rrf3);

				delete rrf;
				delete rrf2;
				delete rrf3;
				(void)rrf4; // for bypass  [-Wunused-but-set-variable]
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
