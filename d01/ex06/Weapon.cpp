

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return;
}

Weapon::Weapon(std::string tp) : _type(tp)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string const&	Weapon::getType(void)
{
	return this->_type;
}

void				Weapon::setType(std::string tp)
{
	this->_type = tp;
	return;
}
