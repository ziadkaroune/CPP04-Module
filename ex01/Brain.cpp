#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor is Created" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain Copy Constructor is Called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain Assignment Operator is Called" << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; ++i)
        {
            ideas[i] = copy.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor is Called" << std::endl;
}

void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
    {
        ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index)const
{
    if (index >= 0 && index < 100)
    {
        return ideas[index];
    }
    return "";
}
