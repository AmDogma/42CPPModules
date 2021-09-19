#include "Intern.hpp"

Form *shrForm(std::string const & name, std::string const & target) {
	std::cout << "Intern creates " << name << std::endl;
	return new ShrubberyCreationForm(target);
}

Form *robotForm(std::string const & name, std::string const & target) {
	std::cout << "Intern creates " << name << std::endl;
	return new RobotomyRequestForm(target);
}

Form *presidentForm(std::string const & name, std::string const & target) {
	std::cout << "Intern creates " << name << std::endl;
	return new PresidentialPardonForm(target);
}

Form *noForm(std::string const & name, std::string const & target) {
	std::cout << "Can't create form " << name << std::endl;
	(void)target;
	return NULL;
}

Form *Intern::makeForm(std::string const & name, std::string const & target) {
	std::string find[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form* (*formFunctions[4])(std::string const & name, std::string const & target) = {&shrForm, &robotForm, &presidentForm, &noForm};
	int i;

	i = 0;
	while (i < 3 && find[i] != name)
		i++;
	return (formFunctions[i](name, target));
}

