#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
	FragTrap();
	FragTrap(std::string addName);
	FragTrap(FragTrap &other);
	~FragTrap();

	FragTrap & operator = (FragTrap const &other);

	void highFivesGuys(void);
protected:
	unsigned int	hitPointsFrag;
	unsigned int attackDamageFrag;
};

#endif