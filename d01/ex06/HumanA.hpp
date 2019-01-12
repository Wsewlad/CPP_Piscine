/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 13:58:58 by vfil              #+#    #+#             */
/*   Updated: 2018/06/20 14:49:05 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &wp);
		~HumanA(void);
		void	attack(void);

	private:
		std::string _name;
		Weapon &_wpn;
};

#endif
