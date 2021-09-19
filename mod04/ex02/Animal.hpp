#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {
public:
	Animal();
	Animal(std::string addType);
	Animal(Animal const &other);
	virtual ~Animal() = 0;

	virtual void makeSound() const;
	std::string getType () const;

	Animal & operator = (Animal const &other);
protected:
	std::string type;
};

#endif
