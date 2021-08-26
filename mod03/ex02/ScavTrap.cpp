#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << this << "\tDefault constructor for ScavTrap" << std::endl;
	name = "default";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string addName) : ClapTrap(addName) {
	std::cout << this << "\tConstructor ScavTrap" << std::endl;
	name = addName;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &other) {
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
}

ScavTrap::~ScavTrap() {
	std::cout << this << "\tDestructor ScavTrap" << std::endl;
}

ScavTrap & ScavTrap::operator = (ScavTrap const &other) {
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}

void ScavTrap::attack(std::string const & target) {
	if (energyPoints >= attackDamage) {
		energyPoints -= attackDamage;
		std::cout << "ScavTrap " << name << " attack " << target << " causing " << attackDamage << " points of damage!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << name << " attack " << target << " causing " << energyPoints << " points of damage!" << std::endl;
		energyPoints = 0;
	}
}

void ScavTrap::guardGate() {
	std::cout << getName() << " have enterred in Gate keeper mode" << std::endl;
}