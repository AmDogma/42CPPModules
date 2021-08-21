#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class	Weapon
{
	public:
		Weapon( std::string name = "BigBalls");
		~Weapon();

		std::string getType()	const;
		
		void setType( std::string name );

	private:
		std::string	_WEAPON_TYPE;
};

#endif