#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap();
	FragTrap(std::string addName);
	FragTrap(FragTrap &other);
	~FragTrap();

	FragTrap & operator = (FragTrap const &other);

	void highFivesGuys(void);
};