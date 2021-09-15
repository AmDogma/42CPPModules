#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
protected:
	//?
public:
	Cure(std::string const & type);
	//?
	std::string const & getType() const;
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif
