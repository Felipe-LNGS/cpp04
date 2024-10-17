
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{

/***************MANDATORY***************/
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
/********************************************/

/***************INVENTORY FULL***************/
// IMateriaSource* src = new MateriaSource();
// static_cast<MateriaSource*> (src)->infoLearned();
// src->learnMateria(new Ice());
// src->learnMateria(new Cure());
// src->learnMateria(new Ice());
// src->learnMateria(new Ice());
// src->learnMateria(new Ice());


// ICharacter* me = new Character("me");
// AMateria* tmp;
// static_cast<MateriaSource*> (src)->infoLearned();
// static_cast<Character*> (me)->infoInventory();

// tmp = src->createMateria("ice");
// me->equip(tmp);
// tmp = src->createMateria("ice");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// tmp = src->createMateria("ice");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// tmp = src->createMateria("ice");
// me->equip(tmp);

// static_cast<Character*> (me)->infoInventory();
// ICharacter* bob = new Character("bob");
// me->use(0, *bob);
// me->use(2, *bob);
// delete bob;
// delete me;
// delete src;
/********************************************/

// /******************WRONGTYPE***************/
// IMateriaSource* src = new MateriaSource();
// src->learnMateria(new Ice());
// src->learnMateria(new Cure());
// ICharacter* me = new Character("me");
// AMateria* tmp;
// static_cast<MateriaSource*> (src)->infoLearned();
// static_cast<Character*> (me)->infoInventory();
// tmp = src->createMateria("fire");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// tmp = src->createMateria("water");
// me->equip(tmp);
// tmp = src->createMateria("ice");
// me->equip(tmp);

// static_cast<Character*> (me)->infoInventory();
// ICharacter* bob = new Character("bob");
// me->use(0, *bob);
// me->use(1, *bob);
// delete bob;
// delete me;
// delete src;
// /********************************************/

/*********************UNEQUIP********************/
// IMateriaSource* src = new MateriaSource();
// src->learnMateria(new Ice());
// src->learnMateria(new Cure());
// ICharacter* me = new Character("me");
// AMateria* tmp;
// static_cast<MateriaSource*> (src)->infoLearned();
// static_cast<Character*> (me)->infoInventory();
// tmp = src->createMateria("ice");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// tmp = src->createMateria("ice");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// static_cast<Character*> (me)->infoInventory();
// me->unequip(0);
// static_cast<Character*> (me)->infoInventory();
// me->equip(tmp);
// static_cast<Character*> (me)->infoInventory();

// ICharacter* bob = new Character("bob");
// me->use(0, *bob);
// me->use(1, *bob);

// delete bob;
// delete me;
// delete src;

/********************************************/

}