#include "All.hpp"

void toChar(All all, std::string arg)
{
	// std::string exeption[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	if (arg )

int main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Only 2 arguments!" << std::endl;
	else
	{
		All all((std::string)av[1]);
	}
	return 0;
}