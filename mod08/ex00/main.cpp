#include "easyfind.hpp"

int main() {
	std::list<int> lst;
	lst.push_back(4);
	lst.push_back(-1222);
	lst.push_front(666);
	lst.push_front(0);

	try
	{
		std::cout << *easyfind(5, lst) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << *easyfind(666, lst) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << *easyfind(0, lst) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}