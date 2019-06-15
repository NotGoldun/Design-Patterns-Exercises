#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal
{
public:
	Animal();
	~Animal();

	static Animal* createAnimal(std::string	animalType);
};

#endif // !ANIMAL_H
