

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* pstr = &str;
	std::string& rstr = str;
	std::cout << "Just string: " << str << std::endl;
	std::cout << "Using the pointer: " << *pstr << std::endl;
	std::cout << "Using the reference: " << rstr << std::endl;
	return (0);
}
