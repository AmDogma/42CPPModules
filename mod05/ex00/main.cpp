#include "Bureaucrat.hpp"

int main ()
{
	Bureaucrat proWorker("proWorker", 1);
	Bureaucrat worker;

	try
	{
		proWorker.incrementGrade();
		std::cout << proWorker << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << proWorker << std::endl;
		std::cerr << e.what() << '\n';
	}

	try
	{
		proWorker.decrementGrade();
		std::cout << proWorker << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << proWorker << std::endl;
		std::cerr << e.what() << '\n';
	}

	try 
	{
		worker.decrementGrade();
		std::cout << worker << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << worker << std::endl;
		std::cout << e.what() << std::endl;
	}

	try
	{
		worker.incrementGrade();
		std::cout << worker << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << worker << std::endl;
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat pro("Anatoliy", 0);
		std::cout << pro << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat dno("Vasiliy", 155);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}