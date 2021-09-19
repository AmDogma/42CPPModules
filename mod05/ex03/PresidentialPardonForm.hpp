#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"
#include <fstream>

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string const & target);
	PresidentialPardonForm(PresidentialPardonForm const &other);
	~PresidentialPardonForm() {}
	PresidentialPardonForm & operator = (PresidentialPardonForm const &other);

	void execute(Bureaucrat const &some) const;
	std::string getTarget() const;
private:
	std::string 	_target;
};

std::ostream &	operator << (std::ostream &ost, PresidentialPardonForm const &other);

#endif
