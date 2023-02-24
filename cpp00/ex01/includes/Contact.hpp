
#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <cctype>
#include <cstring>

class Contact {

public:

	Contact(void);
	~Contact(void);

	int				setFisrtN(std::string str);
	int				setLastN(std::string str);
	int				setNickN(std::string str);
	int				setPhoneNb(std::string str);
	int				setDarkestSecret(std::string str);

	std::string		getFisrtN(void) const;
	std::string		getLastN(void) const;
	std::string		getNickN(void) const;
	std::string		getPhoneNb(void) const;
	std::string		getDarkestSecret(void) const;
	int				isEmpty(void) const;


private:

	std::string		_FirstName;
	std::string		_LastName;
	std::string		_NickName;
	std::string		_PhoneNumber;
	std::string		_DarkestSecret;

};

#endif