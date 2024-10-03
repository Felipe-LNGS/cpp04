#pragma once

#include "Animal.hpp"

class Dog : public Animal{
	public :
		Dog();
		Dog(std::string const &_type);
		Dog(Dog const  &dog);
		Dog & operator=(Dog const &dog);
		~Dog();

		void makeSound()const;

};
