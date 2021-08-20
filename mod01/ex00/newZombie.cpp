#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	int i = 0;
	i++;
	return (new Zombie(name));
}