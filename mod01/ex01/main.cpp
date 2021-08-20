#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	int N;
	
	N = 3;

	Zombie *Horde  = zombieHorde(N, "HorZombie");

	while (N--) {
		Horde[N].announce();
	}
	delete [] Horde;
}
