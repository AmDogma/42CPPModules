#pragma once
#include <iostream>

class ClapTrap {

public:
	ClapTrap();
	ClapTrap(ClapTrap &other);
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap & operator = (ClapTrap const &other);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string		name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;
};