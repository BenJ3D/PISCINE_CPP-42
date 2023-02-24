/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:08:50 by bducrocq          #+#    #+#             */
/*   Updated: 2023/01/16 15:24:02 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main( void )
{

	Data		data;
	Data		*dataCopy;
	uintptr_t	tmp;

	data.name = "Jouet";
	data.color = "Rouge";
	data.price = 19.9f;
	data.quantity = 42;

	tmp = serialize(&data);
	dataCopy = deserialize(tmp);
	// dataCopy = tmp; // impossible - compilation error

	std::cout << "Address [data]     = " << &data << std::endl
	<< "Address [dataCopy] = " << dataCopy << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "Contenu [data]:\n" 
	<< data.name << " / " 
	<< data.color << " / " 
	<< data.price << "$ / "
	<< data.quantity << " Unit" << std::endl << std::endl;
	std::cout << "Contenu [dataCopy]:\n" 
	<< dataCopy->name << " / " 
	<< dataCopy->color << " / " 
	<< dataCopy->price << "$ / "
	<< dataCopy->quantity << " Unit" << std::endl << std::endl;

	return 0;
}

