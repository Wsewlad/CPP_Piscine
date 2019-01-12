/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:08:06 by vfil              #+#    #+#             */
/*   Updated: 2018/06/22 13:08:07 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this-> _name = "NoName";
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

	this->_atomAttackDamage = 70;
	this->_babyAttackDamage = 1;
	this->_bombAttackDamage = 40;

	this->_isrund = 0;
	this->_type = "FR4G-TP";
	std::cout << "New " << this->_type << " " << this-> _name << " created" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_atomAttackDamage = 70;
	this->_babyAttackDamage = 1;
	this->_bombAttackDamage = 40;

	this->_isrund = 0;
	this->_type = "FR4G-TP";
	std::cout << "New " << this->_type << " " << this-> _name << " created" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_type << " destroyed" << std::endl;
	return;
}

FragTrap& FragTrap::operator=(FragTrap const & ft)
{
	this->_hitPoints = ft._hitPoints;
	this->_maxHitPoints = ft._maxHitPoints;
	this->_energyPoints = ft._energyPoints;
	this->_maxEnergyPoints = ft._maxEnergyPoints;
	this->_level = ft._level;
	this->_name = ft._name;
	this->_meleeAttackDamage = ft._meleeAttackDamage;
	this->_rangedAttackDamage = ft._rangedAttackDamage;
	this->_armorDamageReduction = ft._armorDamageReduction;

	this->_atomAttackDamage = ft._atomAttackDamage;
	this->_babyAttackDamage = ft._babyAttackDamage;
	this->_bombAttackDamage = ft._bombAttackDamage;

	this->_isrund = ft._isrund;
	this->_type = ft._type;

	std::cout << this->_type << " " << ft._name << " assigned" << std::endl;
	return *this;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energyPoints >= 25)
	{
		this->_isrund = 1;
		typedef void (FragTrap::*Func)(std::string const & target);

		Func functions[5] = {
		  	&FragTrap::rangedAttack,
		    &FragTrap::meleeAttack,
		    &FragTrap::atomAttack,
		    &FragTrap::babyAttack,
		    &FragTrap::bombAttack
		};

		(this->*(functions[rand() % 5]))(target);

		this->_energyPoints -= 25;
		std::cout << "-25 Energy Points (vaulthunter_dot_exe)" << std::endl;
		this->_isrund = 0;
	}
	else
		std::cout << "No Energy Points =(" << std::endl;
	return;
}
