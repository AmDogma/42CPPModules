#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *Horde =  new Zombie[N];

	while (N){
		N--;
		Horde[N].setName(name);	
	}
	return Horde;
}