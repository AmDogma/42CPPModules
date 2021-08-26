#pragma once
#include <iostream>


class ClapTrap {

public:
	ClapTrap();
	ClapTrap(ClapTrap &other);
	ClapTrap(std::string const name);
	~ClapTrap();

	ClapTrap & operator = (ClapTrap const &other);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setName(std::string const some);
	void setHitPoints(unsigned int amount);
	void setEnergy(unsigned int amount);
	void setDamage(unsigned int amount);
	std::string getName();
	unsigned int setEnergy();
	unsigned int setDamage();
	unsigned int getHitPoints();

protected:
	std::string		name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;

};