#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private :
		Brain *_brain;
	public :
		Dog();
		Dog(std::string const &_type);
		Dog(const Dog &dog);
		Dog & operator=(Dog const &dog);
		~Dog();
		void setIdea(int index, const std::string &idea);
		std::string  getIdea(int index);
		void makeSound()const;
};
