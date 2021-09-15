#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
protected:
	//?
public:
	Ice(std::string const & type);
	//?
	std::string const & getType() const;
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif
