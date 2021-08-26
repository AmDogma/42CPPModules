#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap (), FragTrap(), ScavTrap() {
	std::cout << this << "\tDefault constructor for DiamondTrap" << std::endl;
	_name = "_default";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string addName) : ClapTrap(addName + "_clap_name"), FragTrap(addName + "_clap_name"), ScavTrap(addName + "_clap_name") {
	_name = addName;
	hitPoints = hitPointsFrag;
	energyPoints = energyPointsScav;
	attackDamage = attackDamageFrag;
	std::cout << this << "\tConstructor for DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &other) {
	_name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
}

DiamondTrap::~DiamondTrap() {
	std::cout << this << "\tDestructor DiamondTrap" << std::endl;
}

DiamondTrap & DiamondTrap::operator = (DiamondTrap const &other) {
	_name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}

 void DiamondTrap::whoAmI() {
	 std::cout << "My name " << _name << std::endl << "Clap name " << ClapTrap::name << std::endl;
 }
