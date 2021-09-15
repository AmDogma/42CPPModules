#include "Character.hpp"

Character::Character() : name("") {
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

Character::Character(std::string const & name) : name(name) {
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

Character::Character(Character &other) {
	name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (other.materia[i])
			this->materia[i] = other.materia[i]->clone();
		else
			this->materia[i] = NULL;
	}
}

Character & Character::operator = (Character const &other) {
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (other.materia[i])
			this->materia[i] = other.materia[i]->clone();
		else
			this->materia[i] = NULL;
	}
	return *this;
}

std::string const & Character::getName() const {
	return name;
}

void Character::equip(AMateria* m) {
	int i;

	i = 0;
	while (materia[i])
		i++;
	if (i < 3)
		materia[i] = m;
}

void Character::unequip(int idx) {
	materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (materia[idx])
		materia[idx]->use(target);
}