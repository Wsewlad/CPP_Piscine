

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : type(type), name(name)
{
	std::cout << "New zombie with name '" << this->name << "' and type '" << this->type << "' created." << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " destroyed." << std::endl;
	return;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->name << "(" << this->type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
	return;
}
