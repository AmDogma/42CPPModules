#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &gift ) : _HumanName(name), _WeaponHumanA(gift) {}

void HumanA::attack(){
	std::cout << _HumanName << " attacks with his " << _WeaponHumanA.getType() << std::endl;
}

HumanA::~HumanA() {}
