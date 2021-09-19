#ifndef WrongCat_HPP
#define WrongCat_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(std::string addType);
	WrongCat(WrongCat const &other);
	~WrongCat();

	void makeSound() const;
	WrongCat & operator = (WrongCat const &other);
};

#endif
