 #include "Animal.hpp"

  Animal::Animal() :_type("deafaut")
  {
        std::cout << "Animal (Base class) Constructor is Created "<< std::endl;
  }

 Animal::Animal(const Animal &copy)
    {
            *this = copy;
    }

 Animal &Animal::operator=(const Animal &copy)
    {
            this->_type = copy._type;
            return(*this);
    }
 std::string  Animal::getType(void)const
    {
        return this->_type;
    }
   void Animal::makeSound(void)const
   {
    std::cout << "this animal doesn't have a sound :( " << std::endl;
   }

   Animal::~Animal()
   {
          std::cout << "Animal (base class) deconstructor , By :) "<< std::endl;
   } 