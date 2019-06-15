#include <iostream>
#include "Animal.h"

int main()
{
	Animal* Fish = Animal::createAnimal("Swimming");
	Animal* Unicorn = Animal::createAnimal("Walking");


	std::cin.get();
	return 0;
}