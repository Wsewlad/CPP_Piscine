/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:06:56 by vfil              #+#    #+#             */
/*   Updated: 2018/06/19 18:13:40 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent evil;
	evil.setZombieType("UNIT");
	Zombie* colleague = evil.newZombie("vchechai");
	colleague->announce();
	evil.randomChump();
	delete	colleague;
	return (0);
}
