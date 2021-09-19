#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		ideas[i] = "some thougths";
	std::cout << this << "\tDefault constructor for Brain class" << std::endl;
}

Brain::Brain(Brain const &other) {
	std::cout << this << "\tCopy constructor for Brain class" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain::~Brain() {
	std::cout << this << "\tDestructor for Brain class" << std::endl;
}

std::string Brain::getIdeas(int i) const {
	if (i < 0 || i > 99)
		return "Error";
	else
		return ideas[i];
}


Brain & Brain::operator = (Brain const &other) {
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return *this;
}

