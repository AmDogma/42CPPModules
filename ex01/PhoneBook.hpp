#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>

class phoneBook {

public:

	phoneBook();
	~phoneBook();

	contact	contact[8];
	int		curr;

	void	act();
private:
};

#endif
