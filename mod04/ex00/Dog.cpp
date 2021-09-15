#include "Dog.hpp"

Dog::Dog() : Animal() {
	type = "Dog";
	std::cout << this << "\tDefault constructor for Dog class" << std::endl;
}
Dog::Dog(std::string addType) : Animal(addType) {
	this->type = addType;
	std::cout << this << "\tConstructor with Type for Dog class" << std::endl;
}

Dog::Dog(Dog &other) {
	std::cout << this << "\tCopy constructor for Dog class" << std::endl;
	this->type = other.type;
}

Dog::~Dog() {
	std::cout << this << "\tDestructor for Dog class" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Gav Gav" << std::endl;
}

Dog & Dog::operator = (Dog const &other) {
	this->type = other.type;
	return *this;
}

