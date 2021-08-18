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
	std::cout << std::endl << "Contact successfully created!" << std::endl;
	return;
}

static void makeTen(std::string word){
	int letter;

	letter = 0;
	for (int i = 0; i < 10; i++)
	{
		if (word.length() > 10 && i == 9)
			std::cout << ".";
		else if ((word.length() + i) < 10)
			std::cout << " ";
		else
			std::cout << word[letter++];
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
	std::cout << std::endl << "First name     : " << this->_firstName << std::endl;
	std::cout << "Last name      : " << this->_lastName << std::endl;
	std::cout << "Nickname       : " << this->_nickname << std::endl;
	std::cout << "Phone number   : " << this->_phoneNumb << std::endl;
	std::cout << "Darkest secret : " << this->_darkSecret << std::endl;
}