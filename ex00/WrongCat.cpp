#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat class Constractor is Created "<< std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{

    *this = copy;
}
WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    this->_type = copy._type;
    return *this;
}
void WrongCat::makeSound(void)const
{
    std::cout << this->getType() << " wrong cat sound " << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat class Deonstractor is Created "<< std::endl;
}