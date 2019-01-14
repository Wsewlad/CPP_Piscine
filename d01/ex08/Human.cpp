

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Human makes melee Attack to " << target << std::endl;
	return;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Human makes ranged Attack to " << target << std::endl;
	return;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Human makes intimidating Shout to " << target << std::endl;
	return;
}


void	Human::action(std::string const & action_name, std::string const & target)
{
	typedef void (Human::*ActionFunc)(std::string const & target);

	std::string actionsNames[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	ActionFunc actions[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	for (int i = 0; i < 3; i++)
		if (actionsNames[i] == action_name)
			(this->*(actions[i]))(target);
}