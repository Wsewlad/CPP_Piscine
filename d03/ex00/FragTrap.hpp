/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:08:25 by vfil              #+#    #+#             */
/*   Updated: 2018/06/22 13:08:28 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_H
# define FRAGTRAP_H

# include <string>
# include <ctime>
# include <iostream>

class FragTrap
{

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

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

		FragTrap&	operator=(FragTrap const & ft);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRapaired(unsigned int amount);

		void		atomAttack(std::string const & target);
		void		babyAttack(std::string const & target);
		void		bombAttack(std::string const & target);

		void		vaulthunter_dot_exe(std::string const & target);

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

		int			_isrund;

};

#endif
