#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const int ARRAY_SIZE = 4;
    Animal *animals[ARRAY_SIZE];

    // Fill half the array with Dogs and the other half with Cats
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        if (i < ARRAY_SIZE / 2)
        {
            animals[i] = new Dog();
        }
        else
        {
            animals[i] = new Cat();
        }
		std::cout <<std::endl;
    }

    // Test makeSound
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        animals[i]->makeSound();
    }

    // Delete all Animals
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        delete animals[i];
    }

    // Test deep copy
    Dog dog1;
    dog1.makeSound();
    Dog dog2 = dog1; // Copy constructor
    dog2.makeSound();

    return 0;
}
