

#include "Brain.hpp"
#include <sstream>

std::string	Brain::identify(void) const
{
	std::stringstream ptr;
	ptr << this;
	return ptr.str();
}	

