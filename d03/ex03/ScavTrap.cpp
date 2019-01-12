/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 18:40:57 by vfil              #+#    #+#             */
/*   Updated: 2018/06/22 18:40:58 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this-> _name = "NoName";
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

	this->_atomAttackDamage = 50;
	this->_babyAttackDamage = 4;
	this->_bombAttackDamage = 30;

	this->_isrund = 0;
	this->_type = "SC4V-TP";
	std::cout << "New " << this->_type << " " << this-> _name << " created" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_atomAttackDamage = 50;
	this->_babyAttackDamage = 4;
	this->_bombAttackDamage = 30;

	this->_isrund = 0;
	this->_type = "SC4V-TP";
	std::cout << "New " << this->_type << " " << this-> _name << " created" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_type << " destroyed" << std::endl;
	return;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & st)
{
	this->_hitPoints = st._hitPoints;
	this->_maxHitPoints = st._maxHitPoints;
	this->_energyPoints = st._energyPoints;
	this->_maxEnergyPoints = st._maxEnergyPoints;
	this->_level = st._level;
	this->_name = st._name;
	this->_meleeAttackDamage = st._meleeAttackDamage;
	this->_rangedAttackDamage = st._rangedAttackDamage;
	this->_armorDamageReduction = st._armorDamageReduction;

	this->_atomAttackDamage = st._atomAttackDamage;
	this->_babyAttackDamage = st._babyAttackDamage;
	this->_bombAttackDamage = st._bombAttackDamage;

	std::cout << this->_type << " " << st._name << " assigned" << std::endl;
	return *this;
}

void		ScavTrap::challengeNewcomer(void)
{
	std::string challenges[5] = {
	  	" must kill Dark Siders.",
	    " must make a coffee.",
	    " must bring some eat.",
	    " must look TV.",
	    " must destruct the Earth."
	};
	std::cout << this->_type << " " << this->_name << challenges[rand() % 5] << std::endl;
	return;
}
