#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string name) : _HumanName(name) {}

void HumanB::attack(){
	std::cout << _HumanName << " attacks with his " << _WeaponHumanB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &armory){
	_WeaponHumanB = &armory;
}

HumanB::~HumanB() {}
