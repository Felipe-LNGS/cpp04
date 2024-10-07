#include "MateriaIce.hpp"

Ice::Ice() : AMateria("Ice"){}

Ice::Ice(const Ice &materia) : AMateria(materia){}

Ice & Ice::operator=(Ice const &src){
    if(this != &src)
        this->_type = src._type;
    return *this;
}
Ice::~Ice(){}

AMateria* Ice::clone()const{
return new Ice;
}

void Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at "<< &target << std::endl;
}

