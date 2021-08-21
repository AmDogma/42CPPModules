#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
	std::string readBuff;
	std::size_t findPlace;
	std::string s1;
	std::string s2;
	std::string replaceFile;

	if (argc != 4){
		std::cout << "Wrong number of arguments!\nPlease type 4 arguments:\n1)./replace\n2)\"filename to open\"\n3)\"Old data that will be replaced\"\n4)\"New data\"" << std::endl;
		return 0;
	}
	std::ifstream infile(argv[1]);
	if (!infile.is_open()) {
		std::cout << "Can't open " << argv[1] << std::endl;
		return (-1);
	}
	else if (infile.peek() == EOF) {
		std::cout << "Empty file!" << std::endl;
		return (-1);
	}
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty()) {
		std::cout << "Empty string!" << std::endl;
		return (-1);
	}
	replaceFile = argv[1];
	std::ofstream outfile(replaceFile + ".replace");
	if (!outfile.is_open()) {
		std::cout << "Failed to create new file!" << std::endl;
		return (-1);
	}
	while(std::getline(infile, readBuff)) {
		while ((findPlace = readBuff.find(s1)) != std::string::npos) {
			readBuff.erase(findPlace, s1.length());
			readBuff.insert(findPlace, s2);
		}
		outfile << readBuff;
		if (!infile.eof())
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
}