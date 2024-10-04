#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private :
		Brain* _brain;
	public:
		Cat();
		Cat(const std::string &type);
		Cat(Cat const &type);
		Cat & operator=(Cat const &type);
		~Cat();
	void setIdea(int index, std::string const &idea);
	std::string  getIdea(int index);

		void makeSound()const;
};
