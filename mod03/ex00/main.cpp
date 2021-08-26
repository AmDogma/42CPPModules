#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Black Hole");

	a.attack("White Hole");
	a.takeDamage(5);
	a.beRepaired(10);
	a.takeDamage(15);
}