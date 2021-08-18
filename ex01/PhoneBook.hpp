#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>

class phoneBook {

public:

	phoneBook();
	~phoneBook();

	int		curr;
	void	act();

private:
	contact	contact[8];
};

#endif
