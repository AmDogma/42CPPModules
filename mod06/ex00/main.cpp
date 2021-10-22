#include "All.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Only 2 arguments!" << std::endl;
	else
	{
		All all((std::string)av[1]);
		all.printAll();
	}
	return 0;
}