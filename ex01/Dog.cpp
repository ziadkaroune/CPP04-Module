#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog class Constractor is Created "<< std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    this->brain = new Brain(*copy.brain) ;
    *this = copy;
}
Dog &Dog::operator=(const Dog &copy)

{  this->_type = copy._type; 
     if (this != &copy)
    {
        Animal::operator=(copy);
        delete brain;
        brain = new Brain(*copy.brain);
    }
    
    return *this;
}
void Dog::makeSound(void)const
{
      std::cout << "HOW , HOW , HOW" << std::endl;
}
Dog::~Dog()
{
    delete brain;
    std::cout << "Dog class Deonstractor is Created "<< std::endl;
}