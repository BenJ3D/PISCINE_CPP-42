/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:01:05 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/13 17:45:27 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Array.hpp"
#define MAX_VAL 750
void	pstr(std::string const & str);
void	pstrNNL(std::string const & str);
template <typename T>
void	pstrT(T const & content);
template <typename T>
void	pstrTC(T const & content, char const *color);



int main(int, char **)
{
	try {

		{
			pstr("Creation tableau vide et d'une taille specifique :");
			Array<int>	emptyTab;
			Array<int>	tabArray[8];
		}

		Array<int> numbers(MAX_VAL);
		int *mirror = new int[MAX_VAL];
		srand(time(NULL));
		pstr("Copie des memes valeurs dans les deux tab Array et *int");
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		pstrTC(numbers[42], COLOR_BLUE);
		pstrTC(mirror[42], COLOR_BLUE);
		pstr("Creation de tmp= number via operator= et test(tmp) via contructeur de copie :");
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
			pstrTC(tmp[42], COLOR_BLUE);
			pstrTC(test[42], COLOR_BLUE);
		}

		pstr("Verification que la copie contient bien toutes les meme valeures:\nAuncun message donc OK");
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		pstr("Try avec une valeur index negative (-2)");
		try
		{
			numbers[-2] = 0;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		pstr("Try avec une valeur positif max (MAX_VAL)");
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}

		pstr("Reattribution de nouvelles valeurs random dans tab numbers :");
		pstrNNL("AVANT\nnumber[42] =");
		pstrTC(numbers[42], COLOR_BLUE);
		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		pstrNNL("APRES\nnumber[42] =");
		pstrTC(numbers[42], COLOR_BLUE);
		delete[] mirror;
		}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}



//***** FT UTILS MAIN *********//

void	pstr(std::string const & str)
{
	std::cout << "\n\n" << COLOR_PURPLE << str << COLOR_NONE << std::endl;
}

void	pstrNNL(std::string const & str)
{
	std::cout << COLOR_PURPLE << str << COLOR_NONE << std::endl;
}

template <typename T>
void	pstrT(T const & content)
{
	std::cout << content << std::endl;
}

template <typename T>
void	pstrTC(T const & content, char const *color)
{
	std::cout << color << content << COLOR_NONE << std::endl;
}
