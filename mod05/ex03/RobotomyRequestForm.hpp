#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"
#include <fstream>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string const & target);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	~RobotomyRequestForm() {}
	RobotomyRequestForm & operator = (RobotomyRequestForm const &other);

	void execute(Bureaucrat const &some) const;
	std::string getTarget() const;
private:
	std::string 	_target;
};

std::ostream &	operator << (std::ostream &ost, RobotomyRequestForm const &other);

#endif
