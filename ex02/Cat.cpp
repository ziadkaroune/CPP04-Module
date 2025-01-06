#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "cat";
    this->brain = new Brain();
    std::cout << "Cat class Constractor is Created "<< std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) 
{
    this->brain = new Brain(*copy.brain) ;
    *this = copy;
}
Cat &Cat::operator=(const Cat &copy)
{   this->_type = copy._type; 
     if (this != &copy)
    {
        Animal::operator=(copy);
        delete brain;
        brain = new Brain(*copy.brain);
    }
    
    return *this;
}
void Cat::makeSound(void)const
{
    std::cout << "MEOW , MEOW" << std::endl;
}
Cat::~Cat()
{
    delete brain;
    std::cout << "Cat class Deonstractor is Created "<< std::endl;
}