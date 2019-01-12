/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:15:04 by vfil              #+#    #+#             */
/*   Updated: 2018/06/19 20:10:08 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <ctime>
#include <string>
#include <iostream>

ZombieHorde::ZombieHorde(int N) : n(N)
{
	horde = new Zombie[n];
	return;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] horde;
	return;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->n; i++)
		horde[i].announce();
	return;
}
