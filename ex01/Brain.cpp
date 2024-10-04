#include "Brain.hpp"

	Brain::Brain(){
		for(int i = 0; i < 100; i++)
		{
			_idea[i]= "is sleeping";
		}
		std::cout << "Brain created with default ideas" << std::endl;
	}

	Brain::Brain(const std::string (&ideasArray)[100]) {
		for(int i = 0; i < 100; i++)
			_idea[i] = ideasArray[i];
		std::cout << "Brain with custom ideas created" << std::endl;
	}

	Brain::Brain(Brain const &src){
		std::cout << "Brain copy" << std::endl;
		*this = src;
	}

	Brain &Brain::operator=(const Brain &brain){
		this->_idea[100] = brain._idea[100];
		return *this;
	}

	Brain::~Brain(){
		std::cout << "Brain destructed" << std::endl;
	}

	void Brain::setIdea(int index, std::string const &idea){
		this->_idea[index] = idea[index];
	}

	std::string Brain::getIdea(int index){
		return this->_idea[index];
	}
	