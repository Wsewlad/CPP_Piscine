

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(void);

		void	setZombieType(std::string type);
		void	randomChump(void);
		Zombie*	newZombie(std::string name);

	private:
		std::string type;
};

#endif
