#ifndef Dog_HPP
#  define Dog_HPP
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
    private:
    Brain *brain;
    public:
        Dog();
        Dog(const Dog &copy);
        Dog& operator=(const Dog &copy);
        void makeSound(void)const;
        ~Dog();
};


#endif