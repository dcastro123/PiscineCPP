#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap(void)
{
	Pony	*tmpPony = new Pony();
	tmpPony->setName("Bojack");
	tmpPony->setColor("Brown");
	tmpPony->setBreed("Grade");
	std::cout << "The horse's name is: " << tmpPony->getName() << std::endl;
	std::cout << "The horse's color is: " << tmpPony->getColor() << std::endl;
	std::cout << "The horse's breed is: " << tmpPony->getBreed() << std::endl;
	delete(tmpPony);
}

void	ponyOnTheStack(void)
{
	Pony	tmpPony;
	
	tmpPony.setName("Hollyhock");
	tmpPony.setColor("Red-Brown");
	tmpPony.setBreed("Grade");
	std::cout << "Horse's name: " << tmpPony.getName() << std::endl;
	std::cout << "Horse's color: " << tmpPony.getColor() << std::endl;
	std::cout << "Horse's breed: " << tmpPony.getBreed() << std::endl;
} 

int	main(void)
{
	std::cout << "---- Pony on the heap ---" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	std::cout << "---- Pony on the stack ---" << std::endl;
	ponyOnTheStack();
	return(0);
}
