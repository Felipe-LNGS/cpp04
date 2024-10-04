#pragma once

#include "Animal.hpp"

class Brain{
	protected :
		std::string _idea[100];
	public :
		Brain();
		Brain(const std::string (&ideasArray)[100]);
		Brain(Brain const &src);
		Brain &operator=(const Brain &brain);
		virtual ~Brain();
		void setIdea(int index, std::string const &idea);
		std::string getIdea(int index);
};
