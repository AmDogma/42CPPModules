#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
protected:
	std::string name;
	AMateria*	materia[4];
public:
	Character();
	Character(std::string const & type);
	Character(Character const &other);
	~Character();

	Character & operator = (Character const &other);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif
