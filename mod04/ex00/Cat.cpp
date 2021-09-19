#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << this << "\tDefault constructor for Cat class" << std::endl;
}
Cat::Cat(std::string addType) : Animal(addType) {
	std::cout << this << "\tConstructor with Type for Cat class" << std::endl;
}

Cat::Cat(Cat const &other) {
	std::cout << this << "\tCopy constructor for Cat class" << std::endl;
	this->type = other.type;
}

Cat::~Cat() {
	std::cout << this << "\tDestructor for Cat class" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Miau miau. Mrrrr" << std::endl;
}

Cat & Cat::operator = (Cat const &other) {
	this->type = other.type;
	return *this;
}

