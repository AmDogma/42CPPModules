#include "Animal.hpp"

Animal::Animal() : type("") {
	std::cout << this << "\tDefault constructor for Animal class" << std::endl;
}
Animal::Animal(std::string addType) : type(addType) {
	std::cout << this << "\tConstructor with Type for Animal class" << std::endl;
}

Animal::Animal(Animal const &other) {
	std::cout << this << "\tCopy constructor for Animal class" << std::endl;
	this->type = other.type;
}

Animal::~Animal() {
	std::cout << this << "\tDestructor for Animal class" << std::endl;
}

std::string Animal::getType() const{
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "Animal: - I don't have any voice!" << std::endl;
}

Animal & Animal::operator = (Animal const &other) {
	this->type = other.type;
	return *this;
}

