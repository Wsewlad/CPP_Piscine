

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <ctime>
#include <string>
#include <iostream>

ZombieHorde::ZombieHorde(int N) : n(N)
{
	this->horde = new Zombie[n];
	return;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->horde;
	return;
}

void	ZombieHorde::announce(void) const
{
	for (int i = 0; i < this->n; i++)
		horde[i].announce();
	return;
}
