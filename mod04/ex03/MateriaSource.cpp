#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other) {
	for (int i = 0; i < 4; i++)
	{
		if (other.materia[i])
			this->materia[i] = other.materia[i]->clone();
		else
			this->materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
	{
		if (materia[i])
			delete materia[i];
	}
}


MateriaSource & MateriaSource::operator = (MateriaSource const &other) {
	for (int i = 0; i < 4; i++)
	{
		if (other.materia[i])
			this->materia[i] = other.materia[i]->clone();
		else
			this->materia[i] = NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	int i;

	i = 0;
	while (materia[i])
		i++;
	if (i < 3)
		materia[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] && type == materia[i]->getType())
			return materia[i]->clone();
	}
	return NULL;
}
