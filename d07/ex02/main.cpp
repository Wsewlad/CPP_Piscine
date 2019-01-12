/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 19:50:22 by vfil              #+#    #+#             */
/*   Updated: 2018/06/27 19:50:23 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Array<char*> empt;
	std::cout << "empt <char*> size: " << empt.size() << std::endl;
	try
	{
		empt[0] = const_cast<char*>("empty");
		std::cout << empt[0] << std::endl;
	}
	 catch (const std::out_of_range& oor) {
	    std::cerr << "Out of Range error: " << oor.what() << std::endl;
	}

	/******************************************/

	Array<char*> a(10);
	std::cout << "a <char*> size: " << a.size() << std::endl;
	try
	{
	   for (int i = 0; i < 10; i++)
			a[i] = const_cast<char*>("char");
		for (int i = 0; i < 10; i++)
			std::cout << a[i] << std::endl;
	 }
	 catch (const std::out_of_range& oor) {
	    std::cerr << "Out of Range error: " << oor.what() << std::endl;
	 }

	 /******************************************/

	Array<std::string> s(10);
	std::cout << "s <std::string> size: " << s.size() << std::endl;
	try
	{
	   for (int i = 0; i < 10; i++)
			s[i] = "string";
		for (int i = 0; i < 10; i++)
			std::cout << s[i] << std::endl;
	 }
	 catch (const std::out_of_range& oor) {
	    std::cerr << "Out of Range error: " << oor.what() << std::endl;
	 }

 	/******************************************/

	Array<char*> b;
	b = a;
	std::cout << "b <char*> (copy of a) size: " << b.size() << std::endl;
	try
	{
		for (int i = 0; i < 10; i++)
			std::cout << b[i] << std::endl;
	}
	catch (const std::out_of_range& oor) {
	    std::cerr << "Out of Range error: " << oor.what() << std::endl;
	}

	/******************************************/

	Array<int> ints(10);
	std::cout << "ints <int> size: " << ints.size() << std::endl;
	try
	{
		for (int i = 0; i < 10; i++)
			ints[i] = i;
		for (int i = 0; i < 10; i++)
			std::cout << ints[i] << std::endl;
	}
	catch (const std::out_of_range& oor) {
	    std::cerr << "Out of Range error: " << oor.what() << std::endl;
	}
	return (0);
}