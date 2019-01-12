/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:08:41 by vfil              #+#    #+#             */
/*   Updated: 2018/06/22 13:08:42 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	srand(time(0));
	FragTrap sch42("unit");
	FragTrap unit;

	unit = sch42;

	std::cout << sch42.getName() << std::endl;
	std::cout << unit.getName() << std::endl;

	std::cout << unit.getEnergyPoints() << " EnergyPoints" << std::endl;
	unit.rangedAttack("sch21");
	unit.meleeAttack("sch21");
	unit.atomAttack("sch21");
	unit.babyAttack("sch21");
	unit.bombAttack("sch21");
	unit.atomAttack("sch21");
	unit.beRapaired(60);
	std::cout << unit.getEnergyPoints() << " EnergyPoints" << std::endl;
	unit.takeDamage(50);
	unit.beRapaired(60);
	std::cout << unit.getEnergyPoints() << " EnergyPoints" << std::endl;
	std::cout << "HP = " << unit.getHitPoints() << std::endl;
	unit.vaulthunter_dot_exe("sch21");
	std::cout << unit.getEnergyPoints() << " EnergyPoints" << std::endl;

	return (0);
}