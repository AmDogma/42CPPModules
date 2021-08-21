#include "Karen.hpp"

int main(int argc, char **argv) {
	Karen karen;

	if (argc != 2){
			std::cout << "Need 2 argc" << std::endl;
			return 0;
	}
	karen.complain(argv[1]);
}