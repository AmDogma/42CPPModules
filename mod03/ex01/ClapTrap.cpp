#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("some"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << this << "\tDefault constructor for ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << this << "\tConstructor for ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &other){
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
}

ClapTrap::~ClapTrap() {
	std::cout << this << "\tDestructor ClapTrap" << std::endl;
}

ClapTrap & ClapTrap::operator = (ClapTrap const &other) {
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}

void ClapTrap::setName(std::string const some) {
	name = some;
}

void ClapTrap::setHitPoints(unsigned int amount) {
	hitPoints = amount;
}

void ClapTrap::setEnergy(unsigned int amount) {
	energyPoints = amount;
}
void ClapTrap::setDamage(unsigned int amount) {
	attackDamage = amount;
}

std::string ClapTrap::getName() {
	return name;
}

unsigned int ClapTrap::getHitPoints() {
	return hitPoints;
}

unsigned int ClapTrap::getEnergy() {
	return energyPoints;
}
unsigned int ClapTrap::getDamage() {
	return attackDamage;
}

void ClapTrap::attack(std::string const & target) {
	if (energyPoints >= attackDamage) {
		energyPoints -= attackDamage;
		std::cout << "ClapTrap " << name << " attack " << target << " causing " << attackDamage << " points of damage!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << name << " attack " << target << " causing " << energyPoints << " points of damage!" << std::endl;
		energyPoints = 0;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints <= amount) {
		std::cout << "ClapTrap " << name << " has takken " << amount << " damage and died!" << std::endl;
		hitPoints = 0;
	}
	else {
		std::cout << "ClapTrap " << name << " was attacked and lost " << amount << " hitpoints!" << std::endl;
		hitPoints -= amount;
	}
}	

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << name << " was healed by " << amount << " hitpoints!" << std::endl;
	hitPoints += amount;
}