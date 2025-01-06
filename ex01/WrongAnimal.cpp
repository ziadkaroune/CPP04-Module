 #include "WrongAnimal.hpp"

  WrongAnimal::WrongAnimal() :_type("deafaut")
  {
        std::cout << "WrongAnimal (Base class) Constructor is Created "<< std::endl;
  }

 WrongAnimal::WrongAnimal(const WrongAnimal &copy)
    {
            *this = copy;
    }

 WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
    {
            this->_type = copy._type;
            return(*this);
    }
 std::string  WrongAnimal::getType(void)const
    {
        return this->_type;
    }
   void WrongAnimal::makeSound(void)const
   {
    std::cout << "this WrongAnimal doesn't have a sound :( " << std::endl;
   }

   WrongAnimal::~WrongAnimal()
   {
          std::cout << "WrongAnimal (base class) deconstructor , By :) "<< std::endl;
   } 