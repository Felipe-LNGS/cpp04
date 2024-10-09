#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::Ice(const Ice &materia) : AMateria(materia){}

void Ice::operator=(Ice const &src){
 (void) src;
}
Ice::~Ice(){}

AMateria* Ice::clone()const{
	return new Ice(); 
}

void Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *"<< std::endl;
}

