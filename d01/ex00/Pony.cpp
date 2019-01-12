/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:38:08 by vfil              #+#    #+#             */
/*   Updated: 2018/06/19 14:53:22 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "New pony born" << std::endl;
	this->name = "Pony";
	return;
}

Pony::~Pony(void)
{
	std::cout << this->name << " is gone..." << std::endl;
	return;
}

void	Pony::sing(void)
{
	std::cout << this->name << " is singing: ";
	std::cout << "ololololo OLOLO ololo OLOLO looooooo!" << std::endl;
	return;
}

void	Pony::setName(std::string nm)
{
	this->name = nm;
	return;
}

void	Pony::showName(void)
{
	std::cout << this->name << std::endl;
return;
}
