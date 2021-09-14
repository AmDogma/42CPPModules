#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {
public:
	Animal();
	Animal(std::string addName);
	Animal(Animal &other);
	~Animal();

	Animal & operator = (Animal const &other);
protected:
	std::string type;
};

#endif
