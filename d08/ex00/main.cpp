/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:10:59 by vfil              #+#    #+#             */
/*   Updated: 2018/06/29 14:11:00 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>


int	 main(void)
{

/**************************************** std::list */

	std::list<int> mylist;
	for(int i = 0; i < 5; i++)
		mylist.push_back(i);

	if (easyfind(mylist, 3))
		std::cout << "std::list 	true" << std::endl;
	else
		std::cout << "std::list 	false" << std::endl;

	if (easyfind(mylist, 6))
		std::cout << "std::list 	true" << std::endl;
	else
		std::cout << "std::list 	false" << std::endl;

/**************************************** std::vector */

	std::vector<int> myvectr(5);
	for(int i = 0; i < 5; i++)
		myvectr[i] = i;

	if (easyfind(myvectr, 4))
		std::cout << "std::vector 	true" << std::endl;
	else
		std::cout << "std::vector 	false" << std::endl;

	if (easyfind(myvectr, 6))
		std::cout << "std::vector 	true" << std::endl;
	else
		std::cout << "std::vector 	false" << std::endl;

	return (0);
}