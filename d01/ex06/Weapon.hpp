/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 13:46:29 by vfil              #+#    #+#             */
/*   Updated: 2018/06/20 14:32:20 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon
{
	public:

		Weapon(void);
		Weapon(std::string tp);
		~Weapon(void);

		std::string const	&getType(void);
		void				setType(std::string tp);

	private:
		std::string 		_type;
};

#endif
