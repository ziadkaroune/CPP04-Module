#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
 Animal *b = new Dog();
 b->makeSound();
 b->getType();
delete b;

/**
 const Animal *animal = new Animal();   // error compilation becaus it's an abstract class i cannot inheritate directly
 animal->makeSound();
 animal->getType();
delete animal;
 */
    return 0;
}
