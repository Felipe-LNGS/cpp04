#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *i = new Animal();
	const Animal *j = new Cat();
	const Animal *k = new Dog();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	k->makeSound();

	delete i;
	delete j;
	delete k;

	// const WrongAnimal *i = new WrongAnimal();
	// const WrongAnimal *j = new WrongCat();

	// std::cout << i->getType() << " " << std::endl;
	// std::cout << j->getType() << " " << std::endl;

	// i->makeSound();
	// j->makeSound();

	// delete i;
	// delete j;
}
