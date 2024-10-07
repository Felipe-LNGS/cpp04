#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	// const Animal *i = new Animal(); //Class animal abstraite impossible a instancier
	const Animal *j = new Cat();
	const Animal *k = new Dog();

	std::cout << j->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;

	j->makeSound();
	k->makeSound();

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

// Classe abstraite : Une classe qui contient au moins une méthode virtuelle pure et ne peut pas être instanciée directement.
// Classe dérivée : Une classe qui hérite d'une classe abstraite.
// Si une classe dérivée implémente toutes les méthodes virtuelles pures, elle devient instanciable.
// Si une classe dérivée n'implémente pas toutes les méthodes virtuelles pures, elle reste abstraite et ne peut pas être instanciée.
