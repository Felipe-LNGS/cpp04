#pragma once

#include "AMateria.hpp"

class Cure : public AMateria{
    public :
        Cure();
        Cure(const Cure &materia);
        void operator=(Cure const &src);
        ~Cure();
        AMateria* clone() const;
        void use(ICharacter& target);
};
