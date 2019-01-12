/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:05:55 by vfil              #+#    #+#             */
/*   Updated: 2018/06/19 20:26:44 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <ctime>

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
}

Zombie::Zombie()
{
	std::string names[] = {"Zombie1", "Arnold", "Dicky", "Jeck", "Mac", "Riki"};
	std::string types[] = {"Asshole", "Rembo", "Luser", "Chapion", "King"};
	this->name = names[rand()%6];
	this->type = types[rand()%5];
	return;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << "(" << this->type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
	return;
}
