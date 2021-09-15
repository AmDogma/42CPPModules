#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(std::string const & type) : AMateria(type) {}

Cure::Cure(Cure &other) {
	type = other.type;
}

Cure & Cure::operator = (Cure const &other) {
	this->type = other.type;
	return *this;
}

std::string const & Cure::getType() const {
	return type;
}

Cure* Cure::clone() const {
	return (new Cure(type)); // return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
