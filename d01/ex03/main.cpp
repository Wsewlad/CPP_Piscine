

#include "ZombieHorde.hpp"
#include <ctime>
#include <string>

int	main(void)
{
	srand(time(0));
	ZombieHorde evil(10);
	evil.announce();
	return(0);
}
