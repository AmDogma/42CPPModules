#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << this << "\tDefault constructor for WrongCat class" << std::endl;
}
WrongCat::WrongCat(std::string addType) : WrongAnimal(addType) {
	this->type = addType;
	std::cout << this << "\tConstructor with Type for WrongCat class" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other) {
	std::cout << this << "\tCopy constructor for WrongCat class" << std::endl;
	this->type = other.type;
}

WrongCat::~WrongCat() {
	std::cout << this << "\tDestructor for WrongCat class" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Miau miau. Mrrrr" << std::endl;
}

WrongCat & WrongCat::operator = (WrongCat const &other) {
	this->type = other.type;
	return *this;
}

