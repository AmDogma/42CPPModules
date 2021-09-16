#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(std::string const & type);
	Cure(Cure const &other);
	~Cure() {}

	Cure & operator = (Cure const &other);

	std::string const & getType() const;
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif
