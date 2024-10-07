#include "Animal.hpp"

Animal::Animal() : _type("Animal random"){
	std::cout << BLUE + "CLASS ANIMAL : " << _type << " constructor called" + RESET<< std::endl;
}

Animal::Animal(const std::string &type):_type(type){
	std::cout << BLUE + "CLASS ANIMAL : " << _type << " created" + RESET << std::endl;
}

Animal::Animal(const Animal &type){
	std::cout << BLUE + "CLASS ANIMAL constructor copy called" + RESET << std::endl;
	*this = type;
}

Animal &Animal::operator=(const Animal &animal){
	this->_type = animal._type;
	return *this;
}

Animal::~Animal (){
	std::cout << BLUE <<"CLASS ANIMAL : " << _type << " was dead" + RESET<< std::endl;
}

std::string Animal::getType()const {
return (this->_type);
}
