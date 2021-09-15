#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
	_brain = new Brain();
	std::cout << this << "\tDefault constructor for Cat class" << std::endl;
}
Cat::Cat(std::string addType) : Animal(addType) {
	this->type = addType;
	_brain = new Brain();
	std::cout << this << "\tConstructor with Type for Cat class" << std::endl;
}

Cat::Cat(Cat &other) {
	_brain = other._brain;
	this->type = other.type;
	std::cout << this << "\tCopy constructor for Cat class" << std::endl;
}

Cat::~Cat() {
	delete _brain;
	std::cout << this << "\tDestructor for Cat class" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Miau miau. Mrrrr" << std::endl;
	std::cout << "My Brain : " << _brain->getIdeas(std::rand() % 100) << std::endl;
}

Cat & Cat::operator = (Cat const &other) {
	_brain = other._brain;
	this->type = other.type;
	return *this;
}

