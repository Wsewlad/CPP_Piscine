/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 20:09:10 by vfil              #+#    #+#             */
/*   Updated: 2018/06/22 20:09:11 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
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
	this->_type = "ClapTrap";
	std::cout << "New " << this->_type << " " << this-> _name << " created" << std::endl;
	return;
} 

ClapTrap::ClapTrap(std::string name) : _name(name)
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

	this->_isrund = 0;
	this->_type = "ClapTrap";
	std::cout << "New " << this->_type << " " << this-> _name << " created" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destroyed" << std::endl;
	return;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & st)
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


std::string ClapTrap::getName(void)
{
	return this->_name;
}

int			ClapTrap::getHitPoints(void)
{
	return this->_hitPoints;
}

int			ClapTrap::getEnergyPoints(void)
{
	return this->_energyPoints;
}

int			ClapTrap::getLevel(void)
{
	return this->_level;
}

int			ClapTrap::getMeleeAttackDamage(void)
{
	return this->_meleeAttackDamage;
}

int			ClapTrap::getRangedAttackDamage(void)
{
	return this->_rangedAttackDamage;
}

int			ClapTrap::getArmorDamageReduction(void)
{
	return this->_armorDamageReduction;
}

int			ClapTrap::getAtomAttackDamage(void)
{
	return this->_atomAttackDamage;
}

int			ClapTrap::getBabyAttackDamage(void)
{
	return this->_babyAttackDamage;
}

int			ClapTrap::getBombAttackDamage(void)
{
	return this->_bombAttackDamage;
}

void		ClapTrap::rangedAttack(std::string const & target)
{
	if (this->_energyPoints >= 10)
	{
		std::cout << this->_type << " " << this->_name << " attacks ";
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

void		ClapTrap::meleeAttack(std::string const & target)
{
	if (this->_energyPoints >= 5)
	{
		std::cout << this->_type << " " << this->_name << " attacks ";
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

void		ClapTrap::atomAttack(std::string const & target)
{
	if (this->_energyPoints >= 50)
	{
		std::cout << this->_type << " " << this->_name << " attacks ";
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

void		ClapTrap::babyAttack(std::string const & target)
{
	if (this->_energyPoints >= 1)
	{
		std::cout << this->_type << " " << this->_name << " attacks ";
		std::cout << target << " with babyAttack, causing " << this->_babyAttackDamage;
		std::cout << " points of damage ! Baby Boom! =)" << std::endl;
	}
	else
		std::cout << "No Energy Points =(" << std::endl;
	return;
}

void		ClapTrap::bombAttack(std::string const & target)
{
	if (this->_energyPoints >= 15)
	{
		std::cout << this->_type << " " << this->_name << " attacks ";
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


void		ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= (amount - this->_armorDamageReduction);
	this->_hitPoints = this->_hitPoints < 0 ? 0 : this->_hitPoints;

	std::cout << "-" << (amount - this->_armorDamageReduction) << " damaged!!! ";
	std::cout << this->_hitPoints << " HP lest." << std::endl;
	return;
}

void		ClapTrap::beRapaired(unsigned int amount)
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