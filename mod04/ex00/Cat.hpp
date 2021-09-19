#ifndef Cat_HPP
#define Cat_HPP
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(std::string addType);
	Cat(Cat const &other);
	~Cat();

	void makeSound() const;
	Cat & operator = (Cat const &other);
};

#endif
