#include "Contact.hpp"

contact::contact() {
	_firstName = "";
	_lastName = "";
	_nickname = "";
	_phoneNumb = "";
	_darkSecret = "";
	return;
}

contact::~contact() {
	return;
}

void	contact::addContact(){
	std::cout << "Type first name: ";
	std::getline(std::cin, this->_firstName);
	std::cout << "Type last name: ";
	std::getline(std::cin, this->_lastName);
	std::cout << "Type nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Type phone number: ";
	std::getline(std::cin, this->_phoneNumb);
	std::cout << "Type darkest secret: ";
	std::getline(std::cin, this->_darkSecret);
	std::cout << "Contact successfully created!" << std::endl;
	return;
}

void makeTen(std::string word){
	int i;

	i = 0;
	for (int i = 0; i < 10; i++)
	{
		if (word.length() > 10 && i == 9)
			std::cout << ".";
		else if (word.length() + i < 10)
			std::cout << " ";
		else
			std::cout << word[i];
	}

	std::cout << "|";
}

void	contact::display() const{
	makeTen(this->_firstName);
	makeTen(this->_lastName);
	makeTen(this->_nickname);
	std::cout << std::endl;
	
}

void	contact::displayAll() const{
	
}