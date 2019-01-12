/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 13:58:46 by vfil              #+#    #+#             */
/*   Updated: 2018/06/20 14:48:58 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(void)
{
}

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon &wp)
{
	this->_wpn = &wp;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_wpn->getType() << std::endl;
}
