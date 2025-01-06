#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    std::cout << "Dog class Constractor is Created "<< std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
    *this = copy;
}
Dog &Dog::operator=(const Dog &copy)
{
    if(this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}
void Dog::makeSound(void)const
{
      std::cout << "HOW , HOW , HOW" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog class Deonstractor is Created "<< std::endl;
}