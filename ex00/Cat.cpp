#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "cat";
    std::cout << "Cat class Constractor is Created "<< std::endl;
}

Cat::Cat(const Cat &copy) : Animal()
{

    *this = copy;
}
Cat &Cat::operator=(const Cat &copy)
{
    this->_type = copy._type;
    return *this;
}
void Cat::makeSound(void)const
{
    std::cout << "MEOW , MEOW" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat class Deonstractor is Created "<< std::endl;
}