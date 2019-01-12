/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 20:09:03 by vfil              #+#    #+#             */
/*   Updated: 2018/06/22 20:09:06 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <ctime>
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		std::string getName(void) const;
		int			getHitPoints(void);
		int			getEnergyPoints(void);
		int			getLevel(void);
		int			getMeleeAttackDamage(void);
		int			getRangedAttackDamage(void);
		int			getArmorDamageReduction(void);
		int			getAtomAttackDamage(void);
		int			getBabyAttackDamage(void);
		int			getBombAttackDamage(void);

		ClapTrap&	operator=(ClapTrap const & st);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		
		void		takeDamage(unsigned int amount);
		void		beRapaired(unsigned int amount);

		void		atomAttack(std::string const & target);
		void		babyAttack(std::string const & target);
		void		bombAttack(std::string const & target);

	protected:
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
		int			_isrund;
		std::string	_type;		
};

#endif