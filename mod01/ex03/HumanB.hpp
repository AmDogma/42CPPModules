#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB( std::string name = "Buman");
		~HumanB();
		void setWeapon(Weapon &armory);
		void attack();

	private:
		std::string	_HumanName;
		Weapon		*_WeaponHumanB;

};

#endif