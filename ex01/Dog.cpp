#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << GREEN + "CLASS Dog : " << _type << " constructor called" + RESET<< std::endl;
	this->_brain = new Brain;
}

Dog::Dog(const std::string &type):Animal(type){
	std::cout << GREEN + "CLASS Dog : " << _type << " created" + RESET << std::endl;
}

Dog::Dog(const Dog &type){
	std::cout << GREEN + "CLASS Dog constructor copy called" + RESET << std::endl;
	*this = type;
}

Dog &Dog::operator=(const Dog &Dog){
	this->_type = Dog._type;
	return *this;
}

Dog::~Dog (){
	std::cout << GREEN <<"CLASS Dog : " << _type << " was dead" + RESET<< std::endl;
	delete _brain;
}

void Dog::makeSound()const {
std::cout << GREEN <<"CLASS Dog : "<< _type << " Wouuuuuuf" + RESET << std::endl;
}
