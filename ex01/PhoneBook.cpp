#include "PhoneBook.hpp"

phoneBook::phoneBook(){
	this->curr = 0;
	return;
}

phoneBook::~phoneBook(){
	return;
}

void phoneBook::act() {

	std::string data;
	int num;

	num = 0;
	std::cout << "Welcome to the PhoneBook!" << std::endl;
	std::cout << std::endl << "Please type a command [ ADD | SEARCH | EXIT ]: ";
	while (std::getline(std::cin, data))
	{
		std::cout << std::endl;
		if (data == "ADD"  || data == "add")
		{
			contact[curr].addContact();
			if (curr == 7)
				curr = 0;
			else
				curr++;
		}
		else if (data == "SEARCH" || data == "search")
		{
			std::cout << "                  PhoneBook" << std::endl;
			std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
			std::cout << "|__________|__________|__________|__________|" << std::endl;
			for (int index = 0; index < 8; index++) {
				std::cout << "|         " << index + 1 << "|";
				contact[index].display();
			}
			std::cout << "|__________|__________|__________|__________|" << std::endl;
			std::cout << std::endl << "Type index for more details (from 1 to 8): ";
			std::getline(std::cin, data);
			if (data[0] > '0' && data[0] < '9' && data[1] == '\0') {
				num = std::stoi(data);
				contact[num - 1].displayAll();
			}
			else
				std::cout << std::endl << "Error: Wrong parameter. Try to SEARCH again." << std::endl;
		}	
		else if (data == "EXIT" || data == "exit") {
			std::cout << "               PhoneBook  2021" << std::endl;
			std::cout << "                  Thanks!" << std::endl;
			return;
		}
		std::cout << std::endl << "Please type a command [ ADD | SEARCH | EXIT ]: ";
	}
	return;
}