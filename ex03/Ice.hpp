#pragma once

#include "AMateria.hpp"

class Ice : public AMateria{
    public :
        Ice();
        Ice(const Ice &materia);
        void operator=(Ice const &src);
        ~Ice();
        AMateria* clone() const;
        void use(ICharacter& target);
};

