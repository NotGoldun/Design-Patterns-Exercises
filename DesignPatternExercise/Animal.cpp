#include "Animal.h"
#include "Amphibian.h"
#include "Flying.h"
#include "Swimming.h"
#include "Walking.h"
#include <iostream>



Animal::Animal()
{
}


Animal::~Animal()
{
}

Animal * Animal::createAnimal(std::string animalType)
{
	if (animalType == "Amphibian")
	{
		std::cout << "I'm an amphibian animal" << std::endl;
		return new Amphibian();
	}
	else if (animalType == "Flying")
	{
		std::cout << "I'm a flying animal" << std::endl;
		return new Flying();
	}
	else if (animalType == "Swimming")
	{
		std::cout << "I'm a swimming animal" << std::endl;
		return new Swimming();
	}
	else if (animalType == "Walking")
	{
		std::cout << "I'm a walking animal" << std::endl;
		return new Walking();
	}
	return nullptr;
}
