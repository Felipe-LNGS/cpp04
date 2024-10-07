#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	this->_brain = new Brain;
	std::cout <<YELLOW <<"CLASS CAT : "<< _type << " constructor called" + RESET << std::endl;
}

Cat::Cat(std::string const &type) : Animal(type){
this->_brain = new Brain;
std::cout << YELLOW <<"CLASS CAT : "<<  _type << " created" + RESET << std::endl;
}

Cat::Cat( const Cat &type) : Animal(type){
	 _brain = new Brain(*type._brain);
	std::cout << YELLOW + "CLASS CAT : constructor copy called" + RESET << std::endl;
}

Cat &Cat:: operator=(Cat const &cat){
    if (this != &cat) {
        delete _brain;
        _brain = new Brain(*cat._brain);
        this->_type = cat._type;
    }
    return *this;
}

Cat::~Cat(){
	std::cout << YELLOW <<"CLASS CAT : " << _type << " was dead" + RESET<< std::endl;
	delete _brain;
}

void Cat::makeSound()const{
	std::cout << YELLOW <<"CLASS CAT : "<< _type << " Meooooow" << std::endl;
}

void Cat::setIdea(int index,const std::string  &idea){
	this->_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index)const{
	return this->_brain->getIdea(index);
}