

#include "Human.hpp"

Human::Human(void)
{
	return;
}

Brain const	&Human::getBrain(void)
{
	return this->_hbrain;
}

std::string	Human::identify(void) const
{
	return _hbrain.identify();
}
