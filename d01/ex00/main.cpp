

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony*	jane = new Pony();
	jane->sing();
	jane->setName("Jane");
	jane->showName();
	jane->sing();

	delete jane;
}

void	ponyOnTheStack(void)
{
	Pony	lui = Pony();
	lui.sing();
	lui.setName("Lui");
	lui.showName();
	lui.sing();
}

int	main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
    std::cout << "Main is finished." << std::endl;

	return (0);
}
