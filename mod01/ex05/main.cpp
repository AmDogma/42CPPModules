#include "Karen.hpp"

int main() {
	Karen karen;
	karen.complain("ERROR");
	karen.complain("WARNING");
	karen.complain("DEBUG");
	karen.complain("INFO");
	std::cout << std::endl << "empty string" << std::endl;
	karen.complain("");
	std::cout << "string with none correct data" << std::endl;
	karen.complain("????");
}