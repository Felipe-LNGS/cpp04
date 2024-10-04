#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animals[10];
	for(int i = 0; i < 5; i++)
		{animals[i] = new Dog;
		
			animals[i]->setIdea(0," is eating");
		}


}
