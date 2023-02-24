/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:24:36 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/17 10:57:16 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int	main( void )
{
	/*---------------SUBJECT TESTS ------------------*/
	{
	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	meta->makeSound();
	cat->makeSound(); // will output the cat sound!
	dog->makeSound(); // will output the dog sound!

	delete meta;
	delete dog;
	delete cat;
	}

	std::cout << COLOR_YELLOW << "AND WE CONTINUE...  " << std::endl << COLOR_NONE;

	/*---------------COMPLEMENTARY TESTS ------------------*/
	{
		
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* wcat = new WrongCat();

		std::cout << meta->getType() << " " << std::endl;
		std::cout << wcat->getType() << " " << std::endl;
		meta->makeSound();
		wcat->makeSound(); //no vitual function,i not call its makeSound()

		delete meta;
		delete wcat;
	}
	return 0;
}