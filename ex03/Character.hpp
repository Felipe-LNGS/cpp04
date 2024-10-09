#pragma once

#include "AMateria.hpp"
#include "MateriaSource.hpp"

class Character : public ICharacter{

	private :
		AMateria *_materia[4];
		std::string _name;
		AMateria *_unequipped[4];
		bool isFull(AMateria **materia);
		bool isEmpty(AMateria **materia);
	public:
		Character();
		Character(std::string const &name);
		Character(const Character &src);
		Character & operator=(const Character &character);
		~Character();
		std::string const & getName() const;
		void clearUnequipped();
		void infoInventory()const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};