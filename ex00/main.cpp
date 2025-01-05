#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main()
{

	const Animal	*meta = new Dog();
	std::cout << std::endl;

	std::cout << "Animal _type: " << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	
	delete meta;
std::cout << "----------------------------------" <<std::endl;

    
	const WrongAnimal	*peta = new WrongCat();
	std::cout << std::endl;
	std::cout << "Testing" << std::endl;

	std::cout << "Animal _type: " << peta->getType() << std::endl;
	peta->makeSound();
	std::cout << std::endl;

	
	delete peta;
return 0;
}