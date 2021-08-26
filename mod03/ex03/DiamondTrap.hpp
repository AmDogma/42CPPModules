#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public:
	DiamondTrap();
	DiamondTrap(std::string addName);
	DiamondTrap(DiamondTrap &other);
	~DiamondTrap();

	DiamondTrap & operator = (DiamondTrap const &other);

	void whoAmI();
	
private:
	std::string	_name;
};

#endif