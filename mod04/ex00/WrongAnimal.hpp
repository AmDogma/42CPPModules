#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP
#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(std::string addType);
	WrongAnimal(WrongAnimal const &other);
	virtual ~WrongAnimal();

	void makeSound() const;
	std::string getType () const;

	WrongAnimal & operator = (WrongAnimal const &other);
protected:
	std::string type;
};

#endif
