
#include <iomanip>
#include <iostream>
#include <string>
#include <ctype.h>
#include "Contact.class.hpp"

int	main(void)
{
	int	i = 0;
	std::string cmd;
	Contact phonebook[8];

	while (1)
	{
		std::cout << "Choose the command ADD, SEARCH or EXIT:" << std::endl;
		std::getline(std::cin, cmd);

		if (cmd.compare("EXIT") == 0 || cmd.compare("exit") == 0)
			return (0);
		else if (cmd.compare("ADD") == 0 || cmd.compare("add") == 0)
		{
			if (i < 7)
			{
				phonebook[i].setCfields();
				i++;
			}
			else
				std::cout << "Sorry, you can`t store more than 8 contacts" << std::endl;
		}
		else if (cmd.compare("SEARCH") == 0 || cmd.compare("search") == 0)
		{
			if (i > 0) {
				std::cout << "     index|first name| last name|  nickname" << std::endl;
				for (int j = 0; j < i; j++) {
					std::cout << std::setw(10) << j;
					phonebook[j].showShortInfo();
				}
				std::cout << "Choose index of the desired entry:" << std::endl;

				std::string str;
				int idx;

				std::getline(std::cin, str);
				if (!isdigit(str[0]))
					idx = -1;
				else
					idx = atoi(str.c_str());

				if (idx >= 0 && idx < i)
					phonebook[idx].showInfo();
				else
					std::cout << "Index doesn't exists." << std::endl;
			}
			else
				std::cout << "No contacts found." << std::endl;
		}
	}
	return (0);
}
