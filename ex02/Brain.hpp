#pragma once

#include "Animal.hpp"

class Brain{
	protected :
		std::string _idea[100];
	public :
		Brain();
		Brain(const Brain &src);
		Brain &operator=(const Brain &brain);
		~Brain();
		void setIdea(int index, const std::string  &idea);
		std::string getIdea(int index);
};
