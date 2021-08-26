#include "DiamondTrap.hpp"

int main() {
	DiamondTrap a("Black_Hole");

	a.attack("White_Hole");
	a.highFivesGuys();
	a.whoAmI();
	std::cout << "My damage " << a.getDamage() << std::endl;
	std::cout << "My HP " << a.getHitPoints() << std::endl;
	std::cout << "My energy " << a.getEnergy() << std::endl;
}