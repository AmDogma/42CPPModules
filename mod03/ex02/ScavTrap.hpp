#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap();
	ScavTrap(std::string addName);
	ScavTrap(ScavTrap &other);
	~ScavTrap();

	ScavTrap & operator = (ScavTrap const &other);

	void guardGate();
	void attack(std::string const & target);
};