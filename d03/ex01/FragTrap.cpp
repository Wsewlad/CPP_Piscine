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

	this->_isrund = 0;;

	std::cout << "New FR4G-TP " << this-> _name << " created" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	this->_hitPoints = 100;
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

	std::cout << "New FR4G-TP " << this-> _name << " created" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destroyed" << std::endl;
	return;
}

std::string FragTrap::getName(void)
{
	return this->_name;
}

int			FragTrap::getHitPoints(void)
{
	return this->_hitPoints;
}

int			FragTrap::getEnergyPoints(void)
{
	return this->_energyPoints;
}

int			FragTrap::getLevel(void)
{
	return this->_level;
}

int			FragTrap::getMeleeAttackDamage(void)
{
	return this->_meleeAttackDamage;
}

int			FragTrap::getRangedAttackDamage(void)
{
	return this->_rangedAttackDamage;
}

int			FragTrap::getArmorDamageReduction(void)
{
	return this->_armorDamageReduction;
}

int			FragTrap::getAtomAttackDamage(void)
{
	return this->_atomAttackDamage;
}

int			FragTrap::getBabyAttackDamage(void)
{
	return this->_babyAttackDamage;
}

int			FragTrap::getBombAttackDamage(void)
{
	return this->_bombAttackDamage;
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

	std::cout << "FragTrap " << ft._name << " assigned" << std::endl;
	return *this;
}

void		FragTrap::rangedAttack(std::string const & target)
{
	if (this->_energyPoints >= 10)
	{
		std::cout << "FR4G-TP " << this->_name << " attacks ";
		std::cout << target << " with rangedAttack, causing " << this->_rangedAttackDamage;
		std::cout << " points of damage ! ";
		if (this->_isrund == 0)
		{
			this->_energyPoints -= 10;
			std::cout << "(-10 Energy Points)" << std::endl;
		}
	}
	else
		std::cout << "No Energy Points =(" << std::endl;
	return;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	if (this->_energyPoints >= 5)
	{
		std::cout << "FR4G-TP " << this->_name << " attacks ";
		std::cout << target << " with meleeAttack, causing " << this->_meleeAttackDamage;
		std::cout << " points of damage ! ";
		if (this->_isrund == 0)
		{
			this->_energyPoints -= 5;
			std::cout << "(-5 Energy Points)" << std::endl;
		}
	}
	else
		std::cout << "No Energy Points =(" << std::endl;
	return;
}

void		FragTrap::atomAttack(std::string const & target)
{
	if (this->_energyPoints >= 50)
	{
		std::cout << "FR4G-TP " << this->_name << " attacks ";
		std::cout << target << " with atomAttack, causing " << this->_atomAttackDamage;
		std::cout << " points of damage ! ";
		if (this->_isrund == 0)
		{
			this->_energyPoints -= 50;
			std::cout << "(-50 Energy Points)" << std::endl;
		}
	}
	else
		std::cout << "No Energy Points =(" << std::endl;
	return;
}

void		FragTrap::babyAttack(std::string const & target)
{
	if (this->_energyPoints >= 1)
	{
		std::cout << "FR4G-TP " << this->_name << " attacks ";
		std::cout << target << " with babyAttack, causing " << this->_babyAttackDamage;
		std::cout << " points of damage ! Baby Boom! =)" << std::endl;
	}
	else
		std::cout << "No Energy Points =(" << std::endl;
	return;
}

void		FragTrap::bombAttack(std::string const & target)
{
	if (this->_energyPoints >= 15)
	{
		std::cout << "FR4G-TP " << this->_name << " attacks ";
		std::cout << target << "  with bombAttack, causing " << this->_bombAttackDamage;
		std::cout << " points of damage ! ";
		if (this->_isrund == 0)
		{
			this->_energyPoints -= 15;
			std::cout << "(-15 Energy Points)" << std::endl;
		}
	}
	else
		std::cout << "No Energy Points =(" << std::endl;
	return;
}


void		FragTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= (amount - this->_armorDamageReduction);
	this->_hitPoints = this->_hitPoints < 0 ? 0 : this->_hitPoints;

	std::cout << "-" << (amount - this->_armorDamageReduction) << " damaged!!! ";
	std::cout << this->_hitPoints << " HP left." << std::endl;
	return;
}

void		FragTrap::beRapaired(unsigned int amount)
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















