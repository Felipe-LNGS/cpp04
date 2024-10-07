#include "AMateria.hpp"

    AMateria::AMateria(std::string const & type) : _type(type){}
    AMateria::AMateria (AMateria const &type): _type(type._type){}

    AMateria &AMateria::operator=(const AMateria &materia){
        if (this != &materia)
            this->_type = materia._type;
        return *this;
    }

    AMateria::~AMateria(){}

    const std::string & AMateria::getType() const{
        return this->_type;
    }

    void AMateria::use(ICharacter& target){
        std::cout << "* shoots with random sort at" << &target << "*" << std::endl;
    }