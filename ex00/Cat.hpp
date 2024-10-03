#pragma once

#include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(const std::string &type);
		Cat(Cat const &type);
		Cat & operator=(Cat const &type);
		~Cat();

		void makeSound()const;
};
