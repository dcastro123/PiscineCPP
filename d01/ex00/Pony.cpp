#include "Pony.hpp"

Pony::Pony(void)
{
	return ;
}

Pony::~Pony(void)
{
	return ;
}

void	Pony::setBreed(std::string breed)
{
	this->_breed = breed;
	return ;
}

void	Pony::setColor(std::string color)
{
	this->_color = color;
	return ;
}

void	Pony::setName(std::string name)
{
	this->_name = name;
	return ;
}

std::string	Pony::getBreed(void)
{
	return(this->_breed);
}

std::string	Pony::getName(void)
{
	return(this->_name);
}

std::string	Pony::getColor(void)
{
	return(this->_color);
}
