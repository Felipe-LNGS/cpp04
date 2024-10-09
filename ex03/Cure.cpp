#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::Cure(const Cure &materia) : AMateria(materia){}

void Cure::operator=(Cure const &src){
 (void) src;
}
Cure::~Cure(){}

AMateria* Cure::clone()const{
return new Cure(); 
}

void Cure::use(ICharacter &target){
    std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}
