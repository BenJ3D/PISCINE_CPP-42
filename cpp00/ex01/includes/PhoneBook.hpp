
#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include "./Contact.hpp"

#define MAX_CONTACT 8
#define WCOLUMN 10

typedef enum
{
	TYPEIN_DIGIT,
	TYPEIN_ASCII
} e_typein;

class PhoneBook	{

public:
	PhoneBook(void);
	~PhoneBook(void);

	void			add(void);
	void			search(void) const;
	int				getIndex(void) const;

private:
	Contact			_contact[MAX_CONTACT];
	int				_index;
	void			_draw_line(void) const;
	void			_print_contact(Contact contact) const;
	int				_prepare_to_add(std::string	*str, std::string message, e_typein typein);
};

#endif