

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent evil;
	Zombie* colleague = evil.newZombie("vchechai");
	colleague->announce();
	evil.randomChump();
	delete	colleague;

	return (0);
}
