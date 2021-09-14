#include "Animal.hpp"

Animal::Animal() : type("") {
	std::cout << this << "\tDefault constructor for Animal class" << std::endl;
}
Animal::Animal(std::string addName) : type(addName) {
	std::cout << this << "\tConstructor with NAME for Animal class" << std::endl;
}

Animal::Animal(Animal &other) {
	std::cout << this << "\tCopy constructor for Animal class" << std::endl;
	this->type = other.type;
}

Animal::~Animal() {
	std::cout << this << "\tDestructor for Animal class" << std::endl;
}

Animal & Animal::operator = (Animal const &other) {
	this->type = other.type;
	return *this;
}