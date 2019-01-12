/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 22:01:23 by vfil              #+#    #+#             */
/*   Updated: 2018/06/22 22:01:34 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(void)
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this-> _name = "NoName";
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;

	this->_atomAttackDamage = 30;
	this->_babyAttackDamage = 7;
	this->_bombAttackDamage = 25;

	this->_isrund = 0;
	this->_type = "Ninja";
	std::cout << "New " << this->_type << " " << this-> _name << " created" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;

	this->_atomAttackDamage = 30;
	this->_babyAttackDamage = 7;
	this->_bombAttackDamage = 25;

	this->_isrund = 0;
	this->_type = "Ninja";
	std::cout << "New " << this->_type << " " << this-> _name << " created" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
	*this = src;
	return;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << this->_type << " destroyed" << std::endl;
	return;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const & nj)
{
	this->_hitPoints = nj._hitPoints;
	this->_maxHitPoints = nj._maxHitPoints;
	this->_energyPoints = nj._energyPoints;
	this->_maxEnergyPoints = nj._maxEnergyPoints;
	this->_level = nj._level;
	this->_name = nj._name;
	this->_meleeAttackDamage = nj._meleeAttackDamage;
	this->_rangedAttackDamage = nj._rangedAttackDamage;
	this->_armorDamageReduction = nj._armorDamageReduction;

	this->_atomAttackDamage = nj._atomAttackDamage;
	this->_babyAttackDamage = nj._babyAttackDamage;
	this->_bombAttackDamage = nj._bombAttackDamage;

	std::cout << this->_type << " " << nj._name << " assigned" << std::endl;
	return *this;
}

void		NinjaTrap::ninjaShoebox(FragTrap const & nj)
{
	bombAttack(nj.getName());
	return;
}

void		NinjaTrap::ninjaShoebox(ScavTrap const & nj)
{
	rangedAttack(nj.getName());
	return;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap const & nj)
{
	std::cout << "O, " << nj.getName() << " Hello, Bro!)" << std::endl;
	return;
}










