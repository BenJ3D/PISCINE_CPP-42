/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:24:36 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/17 11:26:56 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

#define ANIMAL_TAB 4

int	main( void )
{
	std::cout << COLOR_RED << "MAX IDEA (Brain) = " << MAX_IDEAS << std::endl << COLOR_NONE;
	/*---------------SUBJECT TESTS ------------------*/
	{
	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	meta->makeSound();
	dog->makeSound(); // will output the dog sound!
	cat->makeSound(); // will output the cat sound!

	delete meta;
	delete dog;
	delete cat;
	}

	/*---------------DEEP COPY TESTS ------------------*/
	std::cout << COLOR_YELLOW << "\n... ... ... ... ... ... " << std::endl << COLOR_NONE;
	std::cout << COLOR_YELLOW << "...    DEEP COPY    ...  " << std::endl << COLOR_NONE;
	std::cout << COLOR_YELLOW << "... ... ... ... ... ...\n" << std::endl << COLOR_NONE;

	std::cout << COLOR_YELLOW << "test sujet correction :\n" << std::endl << COLOR_NONE;
	{
		Cat basic;
		{
			Cat tmp = basic;
		}
	}
	std::cout << COLOR_YELLOW << "... ... ... ... ... ...\n" << std::endl << COLOR_NONE;
	{
		Cat cat1;
		cat1.setIdea(0, "Idea 0");
		cat1.setIdea(1, "Idea 1");
		cat1.setIdea(2, "Idea 2");
		cat1.setIdea(3, "Idea 3");
		cat1.setIdea(4, "Idea 4");
		cat1.setIdea(5, "Idea 5");
		cat1.setIdea(101, "Idea 101"); //protectiion si index invalid
		cat1.setIdea(-1, "NO !"); //protectiion si index invalid

		std::cout << COLOR_YELLOW << "\n\nCat cat2 = cat1" << std::endl << COLOR_NONE;
		Cat cat2 = cat1;
		
		std::cout <<  "cat1 get Idea[4] = " << cat1.getIdea(4) <<std::endl;
		std::cout <<  "cat2 get Idea[4] = " << cat2.getIdea(4) << std::endl;
		std::cout << COLOR_YELLOW << "\n\nget idea avec index invalid sur cat2 :" << std::endl << COLOR_NONE;
		std::cout <<  "cat2 get Idea[101] = " << cat2.getIdea(101) << std::endl;
		std::cout << COLOR_GREEN << std::endl;
		std::cout << "setIdea[2] on cat1 with = \"Idea 42\"" << std::endl;
		std::cout << COLOR_NONE << std::endl;
		cat1.setIdea(2, "Idea 42");
		std::cout << "cat1 get Idea[2] = " << cat1.getIdea(2) << std::endl;
		std::cout << "cat2 get Idea[2] = " << cat2.getIdea(2) << " // ce n'est donc pas le meme cerveau "<< std::endl;
	}

	{
		Dog doggy;
		Dog	buggy;

		doggy.setIdea(42, "WAOUF doggy!");
		buggy.setIdea(42, "WAOUF buggy!");
		std::cout <<  "doggy get Idea[42] " << doggy.getIdea(42) << std::endl;
		std::cout <<  "buggy get Idea[42] " << buggy.getIdea(42) << std::endl;
		std::cout << "buggy = doggy" << std::endl;
		buggy = doggy;
		std::cout <<  "doggy get Idea[42] " << doggy.getIdea(42) << std::endl;
		std::cout <<  "buggy get Idea[42] " << buggy.getIdea(42) << std::endl;
		std::cout << COLOR_GREEN << std::endl;
		std::cout << "set doggy idea 42 = \"WAOUUUUUUF 21\"" << std::endl;
		std::cout << COLOR_NONE << std::endl;
		doggy.setIdea(42, "WAOUUUUUUF 21");
		std::cout <<  "doggy get Idea[42] " << doggy.getIdea(42) << std::endl;
		std::cout <<  "buggy get Idea[42] " << buggy.getIdea(42) << std::endl;

		std::cout << "\nCreate duddy with copy constructor : duddy(doggy)" << std::endl;
		Dog duddy(doggy);
		std::cout <<  "doggy get Idea[42] " << doggy.getIdea(42) << std::endl;
		std::cout <<  "duddy get Idea[42] " << duddy.getIdea(42) << std::endl;
	}
	
	std::cout << COLOR_YELLOW << "\n... ... ... ... ... ... " << std::endl << COLOR_NONE;
	std::cout << COLOR_YELLOW << "... NOW ARRAY ALLOC ...  " << std::endl << COLOR_NONE;
	std::cout << COLOR_YELLOW << "... ... ... ... ... ...\n" << std::endl << COLOR_NONE;
	
	Animal	*animal[ANIMAL_TAB];

	for (int i = 0; i < ANIMAL_TAB; i++)
	{
		if (i % 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}

	std::cout << COLOR_YELLOW << "\n... ... ... ... ... ... " << std::endl << COLOR_NONE;
	std::cout << COLOR_YELLOW << "...  AND DELETE ALL ...  " << std::endl << COLOR_NONE;
	std::cout << COLOR_YELLOW << "... ... ... ... ... ...\n" << std::endl << COLOR_NONE;
	for (int i = 0; i < ANIMAL_TAB; i++)
		delete animal[i];

	return 0;
}