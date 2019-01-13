

#include <iostream>
#include <fstream>

int	main(int argc, char const *argv[])
{
	if (argc == 4)
	{
		std::string		fname(argv[1]);
		std::ifstream	ifs(fname);

		if (ifs.is_open())
		{
			std::string		s1(argv[2]);
			std::string		s2(argv[3]);
			std::ofstream ofs(fname += ".replace");

			if (!s1.empty() && !s2.empty())
			{
				std::string str;
				bool somethingReplaced = false;

				while (std::getline(ifs, str, '\0'))
				{
					std::string::size_type pos;
					if (s1.compare(s2) != 0)
						while ((pos = str.find(s1)) != std::string::npos)
						{
							str.replace(pos, s1.length(), s2);
							somethingReplaced = true;
						}
					ofs << str << std::endl;
				}
				if (!somethingReplaced)
					std::cout << "Nothing to replace." << std::endl;
			}
			else
				std::cout << "Error! Some empty arguments found." << std::endl;
			ifs.close();
			ofs.close();
		}
		else
			std::cout << "No file with name '" << fname << "' found." << std::endl;
	}
	else
		std::cout << "Wrong number of arguments! Use next syntax: ./replace fileName oldString newString" << std::endl;
	return (0);
}