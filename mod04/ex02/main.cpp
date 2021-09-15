#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	// Animal* j1 = new Animal();
	delete j;
	delete i;
}
