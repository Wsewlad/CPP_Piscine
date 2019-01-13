

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);

		void	announce(void) const;
	private:
		Zombie*	horde;
		int		n;
};

#endif
