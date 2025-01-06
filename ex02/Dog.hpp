#ifndef Dog_HPP
#  define Dog_HPP
#include "Animal.hpp"

class Dog : public Animal
{
    private:
    public:
        Dog();
        Dog(const Dog &copy);
        Dog& operator=(const Dog &copy);
        void makeSound(void)const;
        ~Dog();
};


#endif