/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 14:56:20 by vfil              #+#    #+#             */
/*   Updated: 2018/06/20 14:56:21 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout << "Must be 3 aruments!" << std::endl;
		return (1);
	}
	std::string		fname(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);

	std::ifstream	ifs(fname);
	if (ifs.is_open())
	{
		std::ofstream	ofs(fname += ".replace");
		std::string		str;
		while (std::getline(ifs, str))
		{
			std::string::size_type pos;
			while ((pos = str.find(s1)) != std::string::npos)
				str.replace(pos, s1.length(), s2);
			ofs << str << std::endl;
		}
		ifs.close();
		ofs.close();
	}
	return 0;
}