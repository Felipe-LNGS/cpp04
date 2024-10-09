#include "MateriaSource.hpp"
#include <iomanip>

		MateriaSource::MateriaSource() {
			for (int i = 0; i < 4; i++){
				_materia[i] = NULL;
			}
		}

			MateriaSource::MateriaSource(MateriaSource const &src) {
			for (int i = 0; i < 4; i++) {
				if (src._materia[i] != NULL)
					this->_materia[i] = src._materia[i]->clone();
				else
					this->_materia[i] = NULL;
			}
		}
		MateriaSource& MateriaSource::operator=(MateriaSource const &materia) {
			if (this != &materia) {
				for (int i = 0; i < 4; i++) {
					if (this->_materia[i] != NULL) {
						delete this->_materia[i];
					}
					if (materia._materia[i] != NULL) {
						this->_materia[i] = materia._materia[i]->clone();
					} else {
						this->_materia[i] = NULL;
					}
				}
			}
			return *this;
		}

		MateriaSource::~MateriaSource() {
				for (int i = 0; i < 4; i++) {
			if (this->_materia[i] != NULL) {
				delete this->_materia[i];
			}
			}
		}

		void MateriaSource::infoLearned()const{
			std::cout << std::setw(45) << GREEN + UNDERLINE + "LEARNED MATERIA" + RESET << std::endl;
			std::cout << "-------------------------------------------------" << std::endl;
			for(int i = 0; i < 4; i++)
			{
				if(this->_materia[i] != NULL)
					std::cout << YELLOW << i << ". " << this->_materia[i]->getType()<< RESET << std::endl;
				else
					std::cout << YELLOW << i << ". empty" + RESET<< std::endl;
			}
			std::cout << "-------------------------------------------------" << std::endl<<std::endl;
		}
	void MateriaSource::learnMateria(AMateria* m) {
		for (int i = 0; i < 4; i++) {
			if (this->_materia[i] == NULL) {
				this->_materia[i] = m->clone();
			std::cout << BLUE + "Materia learned: " << m->getType() + RESET << std::endl;
				delete m;
				return;
			}
		}
		delete m;
		std::cout << RED + "MateriaSource is full, cannot learn more" + RESET << std::endl;
	}	

	AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type) {
			return this->_materia[i];
		}
	}
	   std::cout << RED + "Unknown Materia type: " + type + RESET << std::endl;
	return NULL;
}
