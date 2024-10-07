#pragma once

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public  :
		WrongCat();
		WrongCat(const std::string &_type);
		WrongCat(WrongCat const &_type);
		WrongCat &operator=(WrongCat const &WrongCat);
		~WrongCat();

		void makeSound()const;
		};

