#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class WrongAnimal{
	protected :
		std::string _type;
	public  :
		WrongAnimal();
		WrongAnimal(const std::string &_type);
		WrongAnimal(WrongAnimal const &_type);
		WrongAnimal &operator=(WrongAnimal const &wronganimal);
		~WrongAnimal();

		void makeSound()const;
		std::string getType()const;
};

