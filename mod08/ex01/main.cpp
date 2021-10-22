#include "span.hpp"

int main ()
{
	Span sp = Span(5);
	try
	{
		std::cout << sp.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n\n";
	}
	
	sp.addNumber(5);
	try
	{
		std::cout << sp.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n\n";
	}
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "sp"  << std::endl << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl << std::endl;

	Span some = Span(100000);
	some.addRange(99, 9999);
	std::cout << "some" << std::endl << some.shortestSpan() << std::endl;
	std::cout << some.longestSpan() << std::endl << std::endl;

	some = sp;
	try
	{
		some.addNumber(9);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n\n";
	}
	std::cout << "some after copy"  << std::endl<< some.shortestSpan() << std::endl;
	std::cout << some.longestSpan() << std::endl << std::endl;
}