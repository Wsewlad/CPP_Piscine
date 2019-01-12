/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 18:40:43 by vfil              #+#    #+#             */
/*   Updated: 2018/06/22 18:40:46 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <string>
# include <ctime>
# include <iostream>

class ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		std::string getName(void);
		int			getHitPoints(void);
		int			getEnergyPoints(void);
		int			getLevel(void);
		int			getMeleeAttackDamage(void);
		int			getRangedAttackDamage(void);
		int			getArmorDamageReduction(void);
		int			getAtomAttackDamage(void);
		int			getBabyAttackDamage(void);
		int			getBombAttackDamage(void);

		ScavTrap&	operator=(ScavTrap const & st);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		
		void		takeDamage(unsigned int amount);
		void		beRapaired(unsigned int amount);

		void		atomAttack(std::string const & target);
		void		babyAttack(std::string const & target);
		void		bombAttack(std::string const & target);

		void		challengeNewcomer(void);

	private:
		int			_hitPoints;
		int			_maxHitPoints;
		int			_energyPoints;
		int			_maxEnergyPoints;
		int			_level;
		std::string _name;
		int			_meleeAttackDamage;
		int			_rangedAttackDamage;
		int			_armorDamageReduction;

		int			_atomAttackDamage;
		int			_babyAttackDamage;
		int			_bombAttackDamage;

};

#endif