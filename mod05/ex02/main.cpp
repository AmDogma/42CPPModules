#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	Bureaucrat pro("Pro", 1);
	Bureaucrat rookie("Rookie", 150);
	ShrubberyCreationForm	shrubber("Shrubbery");
	RobotomyRequestForm		robot("Robot");
	PresidentialPardonForm 	president("President");

	shrubber.beSign(pro);
	rookie.executeForm(shrubber);
	try
	{
		shrubber.execute(rookie);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	pro.executeForm(shrubber);
	
	robot.beSign(pro);
	rookie.executeForm(robot);
	try
	{
		robot.execute(rookie);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	pro.executeForm(robot);

	president.beSign(pro);
	rookie.executeForm(president);
	try
	{
		president.execute(rookie);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	pro.executeForm(president);

	return 0;
}