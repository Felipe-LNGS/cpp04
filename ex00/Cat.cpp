#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout <<YELLOW <<"CLASS CAT : "<< _type << " constructor called" + RESET << std::endl;
}

Cat::Cat(std::string const &type) : Animal(type){
std::cout << YELLOW <<"CLASS CAT : "<<  _type << " created" + RESET << std::endl;
}

Cat::Cat(Cat const &type){
	std::cout << YELLOW + "CLASS CAT : constructor copy called" + RESET << std::endl;
	*this = type;
}

Cat &Cat:: operator=(Cat const &cat){
this->_type = cat._type;
return *this;
}

Cat::~Cat(){
	std::cout << YELLOW <<"CLASS CAT : " << _type << " was dead" + RESET<< std::endl;
}

void Cat::makeSound()const{
	std::cout << YELLOW <<"CLASS CAT : "<< _type << " Meooooow" << std::endl;
}
