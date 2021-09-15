#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <stdio.h>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("bolt"); // return NULL;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	system("leaks forth");
	return 0;
}