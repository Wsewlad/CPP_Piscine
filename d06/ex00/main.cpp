/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 13:27:06 by vfil              #+#    #+#             */
/*   Updated: 2018/06/26 13:27:08 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

int	main(int argc, char **argv)
{
	int 	prec = 1;
	int 	len;
	int 	imp = 0;
	int 	dot = 0;
	double	input = 0;

	if (argc != 2)
		return (1);

	input = atof(argv[1]);
	if (input == input && !isinf(input) && !isdigit(argv[1][0]) && argv[1][0] != '-' && argv[1][0] != '+')
	{
		if (argv[1][1])
			imp = 1;
		input = static_cast<double>(argv[1][0]);
	}
	else
	{
		while (argv[1][dot] && !(argv[1][dot] == '.'))
			dot++;
		if (argv[1][dot])
		{
			len = dot + 1;
			while (argv[1][len] && isdigit(argv[1][len]))
				len++;
			prec = len - dot - 1;
		}
		prec = prec < 1 ? 1 : prec;
	}

	// Char
	std::cout << "char: ";
	if (input < 0 || input > 255 || input != input || imp)
		std::cout << "impossible" << std::endl;
	else if (input < 32 || input > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(input) << "'" << std::endl;

	//Int
	std::cout << "int: ";
	if (input != input || isinf(input) || imp || input > INT_MAX || input < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(input) << std::endl;

	//Float, Double
	if (imp)
	{
		std::cout << "float: " << "impossible" << std::endl;
		std::cout << "double: " << "impossible" << std::endl;
	}
	else
	{
		std::cout << std::fixed << std::setprecision(prec);
		std::cout << "float: " << static_cast<float>(input) << 'f' <<  std::endl;
		std::cout << "double: " << static_cast<double>(input) << std::endl;
	}
	return (0);
}