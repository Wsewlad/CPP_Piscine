

#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "New pony born" << std::endl;
	this->name = "Just a Pony";
	return;
}

Pony::~Pony(void)
{
	std::cout << this->name << " is gone..." << std::endl;
	return;
}

void	Pony::sing(void)
{
	std::cout << this->name << " is singing: ";
	std::cout << "ololololo OLOLO ololo OLOLO looooooo!" << std::endl;
	return;
}

void	Pony::setName(std::string nm)
{
	this->name = nm;
	return;
}

void	Pony::showName(void)
{
	std::cout << this->name << std::endl;
	return;
}
