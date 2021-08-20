#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA( std::string name, Weapon &gift );
		~HumanA();
		
		void attack();

	private:
		std::string	_HumanName;
		Weapon		&_WeaponHumanA;

};

#endif