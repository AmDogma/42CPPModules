#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class contact {

public:
	contact();
	~contact();
	void	addContact();
	void	display() const;
	void	displayAll() const;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumb;
	std::string _darkSecret;
};

#endif
