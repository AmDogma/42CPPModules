#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {}

void Zombie::announce() const{
	std::cout << _name <<  " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name ){
	_name = name;
}

Zombie::~Zombie(){
	std::cout << _name <<  " died again..." << std::endl;
}
