	#include "WrongCat.hpp"

	WrongCat::WrongCat() : WrongAnimal("Wrong cat"){
	std::cout << CYAN + "CLASS WRONG CAT : " << _type << " constructor called" + RESET<< std::endl;
	}

	WrongCat::WrongCat(const std::string &type) : WrongAnimal(type){
	std::cout << CYAN + "CLASS WRONG CAT : " << _type << " created" + RESET << std::endl;
	}


	WrongCat::WrongCat(WrongCat const &type){
	std::cout << CYAN + "CLASS WRONG CAT constructor copy called" + RESET << std::endl;
	*this = type;
	}

	WrongCat &WrongCat:: operator=(WrongCat const &WrongCat){
	this->_type = WrongCat._type;
	return *this;
	}

	WrongCat::~WrongCat(){
	std::cout << CYAN <<"CLASS WRONG CAT : " << _type << " was dead" + RESET<< std::endl;
	}

	void WrongCat::makeSound()const {
	std::cout << CYAN <<"CLASS WRONG CAT : "<< _type << " makes an unknown meoow" + RESET << std::endl;
	}
