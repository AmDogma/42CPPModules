#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
	ScavTrap();
	ScavTrap(std::string addName);
	ScavTrap(ScavTrap &other);
	~ScavTrap();

	ScavTrap & operator = (ScavTrap const &other);

	void guardGate();
	void attack(std::string const & target);
protected:
	unsigned int	energyPointsScav;
};

#endif