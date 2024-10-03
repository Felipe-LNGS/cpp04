	#include "WrongAnimal.hpp"

	WrongAnimal::WrongAnimal() : _type("Wrong animal random"){
	std::cout << MAGENTA + "CLASS WRONG ANIMAL : " << _type << " constructor called" + RESET<< std::endl;
	}

	WrongAnimal::WrongAnimal(const std::string &type) : _type(type){
	std::cout << MAGENTA + "CLASS WRONG ANIMAL : " << _type << " created" + RESET << std::endl;
	}

	WrongAnimal::WrongAnimal(const WrongAnimal  &type){
	std::cout << MAGENTA + "CLASS WRONG ANIMAL constructor copy called" + RESET << std::endl;
	*this = type;
	}

	WrongAnimal &WrongAnimal:: operator=(const WrongAnimal  &wronganimal){
	this->_type = wronganimal._type;
	return *this;
	}

	WrongAnimal::~WrongAnimal(){
	std::cout << MAGENTA <<"CLASS WRONG ANIMAL : " << _type << " was dead" + RESET<< std::endl;
	}

	void WrongAnimal::makeSound()const{
	std::cout << MAGENTA <<"CLASS WRONG ANIMAL : "<< _type << " makes an unknown sound for a animal" + RESET << std::endl;

	}
	std::string WrongAnimal::getType()const{
		return (this->_type);
	}

