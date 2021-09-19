#ifndef Dog_HPP
#define Dog_HPP
#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(std::string addType);
	Dog(Dog const &other);
	~Dog();

	void makeSound() const;
	Dog & operator = (Dog const &other);
};

#endif
