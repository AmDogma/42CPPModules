#include "Weapon.hpp"

Weapon::Weapon( std::string name ) : _WEAPON_TYPE(name) {}

std::string Weapon::getType() const {
	return _WEAPON_TYPE;
}

void Weapon::setType( std::string name ){
	_WEAPON_TYPE = name;
}

Weapon::~Weapon() {}