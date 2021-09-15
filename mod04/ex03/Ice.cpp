#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(std::string const & type) : AMateria(type) {}

Ice::Ice(Ice &other) {
	type = other.type;
}

Ice & Ice::operator = (Ice const &other) {
	this->type = other.type;
	return *this;
}

std::string const & Ice::getType() const {
	return type;
}

Ice* Ice::clone() const {
	return new Ice(type); // return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
