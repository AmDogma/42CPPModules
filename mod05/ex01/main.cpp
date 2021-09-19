#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	Bureaucrat pro("Pro", 1);
	Bureaucrat rookie("Rookie", 150);
	Form	forRookie("forRookie", 150, 100);
	Form	forPro("forPro", 1, 1);
	
	rookie.signForm(forPro);
	try
	{
		forPro.beSign(rookie);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	rookie.signForm(forRookie);
	try
	{
		forPro.beSign(pro);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	rookie.signForm(forRookie);
	try
	{
		forPro.beSign(pro);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}