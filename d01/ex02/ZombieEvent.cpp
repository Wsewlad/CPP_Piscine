

#include "ZombieEvent.hpp"
#include <ctime>

ZombieEvent::ZombieEvent::ZombieEvent(void) : type("default type")
{
	return;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
	return;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, this->type);
}

void	ZombieEvent::randomChump(void)
{
	std::string names[6]= {"IR", "IL", "OZ", "YM", "FB", "VF"};
	srand(time(0));
	Zombie* randZomb = this->newZombie(names[rand()%6]);
	randZomb->announce();
	delete randZomb;
	return;
}
