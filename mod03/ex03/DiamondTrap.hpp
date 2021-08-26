#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public:
	DiamondTrap();
	DiamondTrap(std::string addName);
	DiamondTrap(DiamondTrap &other);
	~DiamondTrap();

	DiamondTrap & operator = (DiamondTrap const &other);
};

#endif