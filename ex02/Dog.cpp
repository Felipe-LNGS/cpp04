#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	this->_brain = new Brain;
	std::cout << GREEN + "CLASS Dog : " << _type << " constructor called" + RESET<< std::endl;
}

Dog::Dog(const std::string &type) : Animal(type){
	this->_brain = new Brain;
	std::cout << GREEN + "CLASS Dog : " << _type << " created" + RESET << std::endl;
}

Dog::Dog(const Dog &type):Animal(type){
	_brain = new Brain(*type._brain);
	std::cout << GREEN + "CLASS Dog constructor copy called" + RESET << std::endl;
}

Dog &Dog::operator=(const Dog &dog){
	if(this!= &dog)
	{
		delete _brain;
		_brain = new Brain(*dog._brain);
		this->_type = dog._type;
	}
	return *this;
}

Dog::~Dog (){
	std::cout << GREEN <<"CLASS Dog : " << _type << " was dead" + RESET<< std::endl;
	delete _brain;
}

void Dog::makeSound()const {
std::cout << GREEN <<"CLASS Dog : "<< _type << " Wouuuuuuf" + RESET << std::endl;
}

void Dog::setIdea(int index, const std::string   &idea){
	this->_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index){
	return this->_brain->getIdea(index);
}