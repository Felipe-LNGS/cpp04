#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private :
		Brain *_brain;
	public :
		Dog();
		Dog(std::string const &_type);
		Dog(Dog const  &dog);
		Dog & operator=(Dog const &dog);
		~Dog();

		void makeSound()const;
};
