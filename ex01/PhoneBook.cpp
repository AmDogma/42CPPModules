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


	std::cout << "Welcome to the PhoneBook!" << std::endl;
	std::cout << "Please type a command: ADD | SEARCH | EXIT " << std::endl;
	while (std::getline(std::cin, data))
	{
		if (data == "ADD")
		{
			contact[curr].addContact();
			if (curr == 7)
				curr = 0;
			else
				curr++;
		}
		else if (data == "SEARCH")
		{
			std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
			for (int index = 0; index < 8; index++)
			{
				std::cout << "|         " << index + 1 << "|";
				contact[index].display();
			}
				
			std::cout << "Type index (1 - 8):";
			// std::getline(std::cin, data);
			// int num = std::stoi(data);
		}
			
		else if (data == "EXIT")
			return;
		std::cout << "Please type a command: ADD | SEARCH | EXIT " << std::endl;
	}
	return;
}