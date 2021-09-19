#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("") {
	std::cout << this << "\tDefault constructor for WrongAnimal class" << std::endl;
}
WrongAnimal::WrongAnimal(std::string addType) : type(addType) {
	std::cout << this << "\tConstructor with Type for WrongAnimal class" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other) {
	std::cout << this << "\tCopy constructor for WrongAnimal class" << std::endl;
	this->type = other.type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << this << "\tDestructor for WrongAnimal class" << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal: - I don't have any voice!" << std::endl;
}

WrongAnimal & WrongAnimal::operator = (WrongAnimal const &other) {
	this->type = other.type;
	return *this;
}

