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

	std::cout << "New SC4V-TP " << this-> _name << " created" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : _name(name)
{
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

	std::cout << "New SC4V-TP " << this-> _name << " created" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destroyed" << std::endl;
	return;
}

std::string ScavTrap::getName(void)
{
	return this->_name;
}

int			ScavTrap::getHitPoints(void)
{
	return this->_hitPoints;
}

int			ScavTrap::getEnergyPoints(void)
{
	return this->_energyPoints;
}

int			ScavTrap::getLevel(void)
{
	return this->_level;
}

int			ScavTrap::getMeleeAttackDamage(void)
{
	return this->_meleeAttackDamage;
}

int			ScavTrap::getRangedAttackDamage(void)
{
	return this->_rangedAttackDamage;
}

int			ScavTrap::getArmorDamageReduction(void)
{
	return this->_armorDamageReduction;
}

int			ScavTrap::getAtomAttackDamage(void)
{
	return this->_atomAttackDamage;
}

int			ScavTrap::getBabyAttackDamage(void)
{
	return this->_babyAttackDamage;
}

int			ScavTrap::getBombAttackDamage(void)
{
	return this->_bombAttackDamage;
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

	std::cout << "ScavTrap " << st._name << " assigned" << std::endl;
	return *this;
}

void		ScavTrap::rangedAttack(std::string const & target)
{
	if (this->_energyPoints >= 13)
	{
		std::cout << "SC4V-TP " << this->_name << " attacks ";
		std::cout << target << " with rangedAttack, causing " << this->_rangedAttackDamage;
		std::cout << " points of damage ! ";
		this->_energyPoints -= 13;
		std::cout << "(-13 Energy Points)" << std::endl;
	}
	else
		std::cout << "No Energy Points =(" << std::endl;
	return;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	if (this->_energyPoints >= 4)
	{
		std::cout << "SC4V-TP " << this->_name << " attacks ";
		std::cout << target << " with meleeAttack, causing " << this->_meleeAttackDamage;
		std::cout << " points of damage ! ";
		this->_energyPoints -= 4;
		std::cout << "(-4 Energy Points)" << std::endl;
	}
	else
		std::cout << "No Energy Points =(" << std::endl;
	return;
}

void		ScavTrap::atomAttack(std::string const & target)
{
	if (this->_energyPoints >= 35)
	{
		std::cout << "SC4V-TP " << this->_name << " attacks ";
		std::cout << target << " with atomAttack, causing " << this->_atomAttackDamage;
		std::cout << " points of damage ! ";
		this->_energyPoints -= 35;
		std::cout << "(-35 Energy Points)" << std::endl;
	}
	else
		std::cout << "No Energy Points =(" << std::endl;
	return;
}

void		ScavTrap::babyAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks ";
	std::cout << target << " with babyAttack, causing " << this->_babyAttackDamage;
	std::cout << " points of damage ! Baby Boom! =)" << std::endl;
	return;
}

void		ScavTrap::bombAttack(std::string const & target)
{
	if (this->_energyPoints >= 10)
	{
		std::cout << "SC4V-TP " << this->_name << " attacks ";
		std::cout << target << " with bombAttack, causing " << this->_bombAttackDamage;
		std::cout << " points of damage ! ";
		this->_energyPoints -= 10;
		std::cout << "(-10 Energy Points)" << std::endl;
	}
	else
		std::cout << "No Energy Points =(" << std::endl;
	return;
}


void		ScavTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= (amount - this->_armorDamageReduction);
	this->_hitPoints = this->_hitPoints < 0 ? 0 : this->_hitPoints;

	std::cout << "-" << (amount - this->_armorDamageReduction) << " damaged!!! ";
	std::cout << this->_hitPoints << " HP lest." << std::endl;
	return;
}

void		ScavTrap::beRapaired(unsigned int amount)
{
	int	hp;
	int energy;
	int temp = amount;

	if ((this->_hitPoints + temp) > this->_maxHitPoints)
	{
		hp = this->_maxHitPoints - this->_hitPoints;
		this->_hitPoints = this->_maxHitPoints;
	}
	else
	{
		this->_hitPoints += temp;
		hp = temp;
	}

	if ((this->_energyPoints + (temp / 2)) > this->_maxEnergyPoints)
	{
		energy = this->_maxEnergyPoints - this->_energyPoints;
		this->_energyPoints = this->_maxEnergyPoints;
	}
	else
	{
		this->_energyPoints += (temp / 2);
		energy = (temp / 2);
	}

	std::cout << hp << " Hit Points and " << energy;
	std::cout << " Energy Points rapaired!" << std::endl;;
	return;
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
	std::cout << "SC4V-TP " << this->_name << challenges[rand() % 5] << std::endl;
	return;
}
