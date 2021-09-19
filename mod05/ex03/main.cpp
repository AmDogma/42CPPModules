#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main ()
{
	Intern some;
	Form *ptr;
	Bureaucrat pro("ProBureaucrat", 1);
	Bureaucrat newBy("newByBureaucrat", 150);

	ptr = some.makeForm("Super form", "home");
	ptr = some.makeForm("robotomy request", "home");
	newBy.signForm(*ptr);
	newBy.executeForm(*ptr);
	pro.executeForm(*ptr);
	pro.signForm(*ptr);
	pro.executeForm(*ptr);
	

	return 0;
}