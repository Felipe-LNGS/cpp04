#include "Character.hpp"
#include <iomanip>
	Character::Character(){
		this->_name = "NPC";
		for(int i = 0; i < 4 ; i++)
		{	
			_materia[i] = NULL;
			_unequipped[i] = NULL;
		}
	}

	Character::Character(std::string const &name){
		this->_name = name;
			for(int i = 0; i < 4 ; i++)
		{	
			_materia[i] = NULL;
			_unequipped[i] = NULL;

		}
	}
	
	Character::Character(const Character &src)
	{
   			for (int i = 0; i < 4; i++) {
				if (src._materia[i]) {
					_materia[i] = src._materia[i]->clone();
				} else {
					_materia[i] = NULL;
				}
				if (src._unequipped[i]) {
					_unequipped[i] = src._unequipped[i]->clone();
				} else {
					_unequipped[i] = NULL;
				}
        }
	}
	

Character & Character::operator=(const Character &character) {
    if (this != &character) {
            for (int i = 0; i < 4; i++) {
                delete _materia[i];
                delete _unequipped[i];
            }

            for (int i = 0; i < 4; i++) {
                if (character._materia[i]) {
                    _materia[i] = character._materia[i]->clone();
                } else {
                    _materia[i] = NULL;
                }
                if (character._unequipped[i]) {
                    _unequipped[i] = character._unequipped[i]->clone();
                } else {
                    _unequipped[i] = NULL;
                }
            }
        }
        return *this;
}

	Character::~Character(){
		for (int i = 0; i < 4; i++) {
            if(this->_materia[i] != NULL)
				delete _materia[i];
			}
		clearUnequipped();
	}

	std::string const & Character::getName() const{
		return this->_name;
	}

	bool Character::isFull(AMateria **materia){
		
		for(int i = 0; i < 4; i++)
		{
			if(materia[i] == NULL)
				return false;
		}	
		return true;
	}

	bool Character::isEmpty(AMateria **materia){
		for(int i = 0; i < 4; i++)
		{
			if(materia[i] != NULL)
				return false;
		}	
			return true;
	}

	void Character::equip(AMateria* m){
		 if (m == NULL) {
        return;
    	}
		 if (isFull(this->_materia)){
			std::cout << RED + "Try to equip " << UNDERLINE + m->getType() + RESET + RED <<" but your inventory is full" + RESET << std::endl;
			return ;}
		for(int i = 0; i < 4; i++)
		{
		if (_materia[i] == NULL){
			std::cout <<CYAN + "Materia "<< UNDERLINE + m->getType() + RESET +CYAN<< " set at index : " + RESET << i << std::endl;
			this->_materia[i] = m->clone();
			break ;
			}

		}
	}

	void Character::unequip(int idx){
		if(isEmpty(this->_materia)){
			std::cout << RED + "You inventory is empty" + RESET << std::endl;
			return ;
		}
		if(idx >= 4 || idx < 0){
			std::cout << RED + "Index out of range" + RESET << std::endl;
			return ;
		}
		if(_materia[idx] == NULL){
			std::cout << RED + "You try to unequip invalid materia" + RESET << std::endl;
			return ;
		}
		for (int i = 0; i < 4; i++) {
            if (_unequipped[i] == NULL) {
                std::cout <<MAGENTA+ "Unequip "<<UNDERLINE+ _materia[idx]->getType()+RESET +MAGENTA <<" succefully" + RESET << std::endl;
				_unequipped[i] = _materia[idx];
                _materia[idx] = NULL;
                return;
            }
        }
		clearUnequipped();
        unequip(idx);  
	}
	
	void Character::use(int idx, ICharacter& target){
		if(isEmpty(this->_materia)){
			std::cout << RED + "You need to learn one sort before using one" + RESET << std::endl;
			return ;
		}
		if(idx >= 4 || idx < 0){
			std::cout << RED + "Index out of range" + RESET << std::endl;
			return ;
		}
		if(_materia[idx] == NULL){
			std::cout << RED + "You try to use a sort u didn't learn" + RESET << std::endl;
			return ;
		}
		else
			this->_materia[idx]->use(target);
	}

			void Character::infoInventory()const{
			std::cout << std::setw(40) << GREEN + UNDERLINE + "INVENTORY" + RESET << std::endl;
			std::cout << "-------------------------------------------------" << std::endl;
			for(int i = 0; i < 4; i++)
			{
				if(this->_materia[i] != NULL)
					std::cout << YELLOW << i << ". " << this->_materia[i]->getType()<< RESET << std::endl;
				else
					std::cout << YELLOW << i << ". empty" + RESET<< std::endl;
			}
			std::cout << "-------------------------------------------------" << std::endl;
		}
	  void Character::clearUnequipped() {
        for (int i = 0; i < 4; i++) {
            if (_unequipped[i] != NULL) {
                delete _unequipped[i];
                _unequipped[i] = NULL;
            }
        }
    }