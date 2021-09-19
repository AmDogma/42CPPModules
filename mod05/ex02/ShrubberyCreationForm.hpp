#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const & target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	~ShrubberyCreationForm() {}
	ShrubberyCreationForm & operator = (ShrubberyCreationForm const &other);

	void execute(Bureaucrat const &some) const;
	std::string getTarget() const;
private:
	std::string 	_target;
};

std::ostream &	operator << (std::ostream &ost, ShrubberyCreationForm const &other);

#endif
