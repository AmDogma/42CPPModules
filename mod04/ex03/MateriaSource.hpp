#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	~MateriaSource();

	MateriaSource & operator = (MateriaSource const &other);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
protected:
	AMateria* materia[4];
};

#endif
