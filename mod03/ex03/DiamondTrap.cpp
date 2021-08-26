#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap (), FragTrap(), ScavTrap() {
	std::cout << this << "\tDefault constructor for DiamondTrap" << std::endl;
	name = "default";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

DiamondTrap::DiamondTrap(std::string addName) : ClapTrap(addName + "_clap_name"), FragTrap(), ScavTrap()
{
	name = addName;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << this << "\tConstructor for DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &other) {
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
}

DiamondTrap::~DiamondTrap() {
	std::cout << this << "\tDestructor DiamondTrap" << std::endl;
}

DiamondTrap & DiamondTrap::operator = (DiamondTrap const &other) {
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}
