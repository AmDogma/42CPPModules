#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdlib.h>

int	main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	delete j;
	delete i;
	system("leaks second");
}
