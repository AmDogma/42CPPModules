#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern() {}
	~Intern() {}

	Form *makeForm(std::string const & type, std::string const & name);
};

#endif