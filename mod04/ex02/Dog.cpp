#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	_brain = new Brain();
	std::cout << this << "\tDefault constructor for Dog class" << std::endl;
}
Dog::Dog(std::string addType) : Animal(addType) {
	_brain = new Brain();
	std::cout << this << "\tConstructor with Type for Dog class" << std::endl;
}

Dog::Dog(Dog const &other) {
	std::cout << this << "\tCopy constructor for Dog class" << std::endl;
	_brain = new Brain(*other._brain);
	this->type = other.type;
}

Dog::~Dog() {
	std::cout << this << "\tDestructor for Dog class" << std::endl;
	delete _brain;
}

void Dog::makeSound() const {
	std::cout << "Gav Gav. ";
	std::cout << "My Brain says: " << _brain->getIdeas(std::rand() % 100) << std::endl;
}

Dog & Dog::operator = (Dog const &other) {
	_brain = new Brain(*other._brain);
	this->type = other.type;
	std::cout << "Dog operator =" << std::endl;
	return *this;
}

