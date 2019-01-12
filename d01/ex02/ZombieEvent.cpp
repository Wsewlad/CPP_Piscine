/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:06:31 by vfil              #+#    #+#             */
/*   Updated: 2018/06/19 18:14:19 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <ctime>

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
	return;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, this->type);
}

void	ZombieEvent::randomChump(void)
{
	std::string names[6]= {"IR", "IL", "OZ", "YM", "FB", "VF"};
	srand(time(0));
	Zombie* randZomb = this->newZombie(names[rand()%6]);
	randZomb->announce();
	delete randZomb;
	return;
}
