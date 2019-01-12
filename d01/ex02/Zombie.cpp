/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:05:55 by vfil              #+#    #+#             */
/*   Updated: 2018/06/19 16:24:03 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << "(" << this->type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
	return;
}
