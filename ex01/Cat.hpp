#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private :
		Brain* _brain;
	public:
		Cat();
		Cat(const std::string &type);
		Cat(const Cat &type);
		Cat & operator=(Cat const &type);
		~Cat();
	void setIdea(int index,const std::string  &idea);
	std::string  getIdea(int index)const ;
	void makeSound()const;
};
