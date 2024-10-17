#include "Brain.hpp"

	Brain::Brain(){
		for(int i = 0; i < 100; i++)
		{
			_idea[i]= "is sleeping";
		}
		std::cout << RED +"Brain created with default ideas" + RESET << std::endl;
	}

	Brain::Brain(const Brain &src){
		std::cout << RED + "Brain copy" + RESET << std::endl;
		if (this != &src) {
		for (size_t i = 0; i < 100; ++i) 
			_idea[i] = src._idea[i];
		}
	}

	Brain &Brain::operator=(const Brain &brain){
		std::cout << "Brain assignement" << std::endl;
		if (this != &brain) {
			for (size_t i = 0; i < 100; ++i) 
				_idea[i] = brain._idea[i];
        }
        return *this;
	}

	Brain::~Brain(){
		std::cout << RED+ "Brain destructed" + RESET  << std::endl;
	}

	void Brain::setIdea(int index, const std::string  &idea){
		if (index >= 0 && index < 100)  
			this->_idea[index] = idea;
		else
			std::cout << RED +"Idea out of range" + RESET << std::endl;
	}

	std::string Brain::getIdea(int index){
		if (index >= 0 && index < 100)  
       		return this->_idea[index];
		else
			return RED +"Idea out of range" + RESET;
	}
	