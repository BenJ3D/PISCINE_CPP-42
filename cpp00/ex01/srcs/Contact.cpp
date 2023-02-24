/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 08:15:19 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/10 18:00:39 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

Contact::Contact(void) 
{
	// std::cout << "Contact Constructor Called" << std::endl;
	return;
}

Contact::~Contact()
{
	// std::cout << "Contact Destructor called" << std::endl;
	return;
}

int	Contact::setFisrtN(std::string str){

	this->_FirstName = str;
	return (0);
}

int	Contact::setLastN(std::string str){

	this->_LastName = str;
	return (0);
}

int	Contact::setNickN(std::string str){

	this->_NickName = str;
	return (0);
}

int	Contact::setPhoneNb(std::string str){

	this->_PhoneNumber = str;
	return (0);
}

int	Contact::setDarkestSecret(std::string str){

	this->_DarkestSecret = str;
	return (0);
}

std::string	Contact::getFisrtN(void) const {
	return (this->_FirstName);
}

std::string	Contact::getLastN(void) const {
	return (this->_LastName);
}

std::string	Contact::getNickN(void) const {
	return (this->_NickName);
}

std::string	Contact::getPhoneNb(void) const {
	return (this->_PhoneNumber);
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->_DarkestSecret);
}

int	Contact::isEmpty(void) const {
	return (this->_FirstName.empty());
}
