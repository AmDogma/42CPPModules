#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(std::string const & type);
	Ice(Ice const &other);
	~Ice() {}

	Ice & operator = (Ice const &other);

	std::string const & getType() const;
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif
