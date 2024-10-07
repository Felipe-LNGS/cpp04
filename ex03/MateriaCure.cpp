#include "MateriaCure.hpp"

Cure::Cure() : AMateria("Cure"){}

Cure::Cure(const Cure &materia) : AMateria(materia){}

Cure & Cure::operator=(Cure const &src){
    if(this != &src)
        this->_type = src._type;
    return *this;
}
Cure::~Cure(){}

AMateria* Cure::clone()const{
return new Cure;
}

void Cure::use(ICharacter &target){
    std::cout << "* heals "<< &target <<"’s wounds *" << std::endl;
}
