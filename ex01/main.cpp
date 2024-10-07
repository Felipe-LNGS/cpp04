#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animals[10];
for (int i = 0; i < 5; ++i) {
    animals[i] = new Dog();
	animals[i+5] = new Cat();
}
for(int i = 0; i < 10; i++)
	delete animals[i];

/*********DEEP COPY CAT**********/
Cat cat ;
Cat cat2 = cat;
for(int i = 0; i < 20; i++)
	std::cout <<"Idea of this cat before copy: " << CYAN + cat.getIdea(i) + RESET << std::endl;
for(int i = 0; i < 20; i++)
{
	if (i % 2 == 0)
		cat2.setIdea(i, "Chasing that red dot again");
  	if (i % 5 == 0)
		cat2.setIdea(i, "That bird is quite interesting...");
    if (i % 3 == 0)
		cat2.setIdea(i, "is munching on some crunchy kibble");
	std::cout <<"Idea of this cat : " << BLUE + cat2.getIdea(i) + RESET << std::endl;
}
for(int i = 0; i < 20; i++)
	std::cout <<"Idea of this cat after copy: " << CYAN + cat.getIdea(i) + RESET << std::endl;
/*********DEEP COPY DOG**********/
Dog dog ;
Dog dog2 = dog;
for(int i = 0; i < 20; i++)
	std::cout <<"Idea of this dog before copy: " << CYAN + dog.getIdea(i) + RESET << std::endl;
for(int i = 0; i < 20; i++)
{
	if (i % 2 == 0)
		dog2.setIdea(i, "Chasing that cat again");
  	if (i % 5 == 0)
		dog2.setIdea(i, "That bone looks delicious!");
    if (i % 3 == 0)
		dog2.setIdea(i, "is munching on some crunchy kibble");
	std::cout <<"Idea of this dog : " << BLUE + dog2.getIdea(i) + RESET << std::endl;
}
for(int i = 0; i < 20; i++)
	std::cout <<"Idea of this dog after copy: " << CYAN + dog.getIdea(i) + RESET << std::endl;
}


// for(int i = 0; i < 100; i++)
// {
// 	if (i % 2 == 0)
// 		static_cast<Cat*>(animals[5])->setIdea(i, "Chasing that red dot again");
//   	if (i % 5 == 0)
// 		static_cast<Cat*>(animals[5])->setIdea(i, "That bird is quite interesting...");
//     if (i % 3 == 0)
// 		static_cast<Cat*>(animals[5])->setIdea(i, "is munching on some crunchy kibble");
// 	std::cout <<"Idea of this cat : " << CYAN + static_cast<Cat*>(animals[5])->getIdea(i) + RESET << std::endl;
// }