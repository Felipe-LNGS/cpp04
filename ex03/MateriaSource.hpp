#pragma once 

#include "IMateriasource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource{

    private:
		AMateria *_materia[4];
	public:
		MateriaSource();
		MateriaSource(std::string const &type);
		MateriaSource(const MateriaSource &src);
		MateriaSource & operator=(const MateriaSource &materia);
		~MateriaSource();
		void infoLearned()const;
		void learnMateria(AMateria*);    	
		AMateria* createMateria(std::string const & type);
};
