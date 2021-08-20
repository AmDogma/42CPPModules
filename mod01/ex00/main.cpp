#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int main()
{
	Zombie *newZ = newZombie("ZombieNew");
	newZ->announce();
	
	randomChump("ZombieChump");
	delete newZ;
}
