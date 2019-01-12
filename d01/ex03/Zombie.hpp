/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:06:08 by vfil              #+#    #+#             */
/*   Updated: 2018/06/19 20:26:42 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		Zombie();
		void		announce(void);
		std::string	type;
		std::string	name;
};

#endif
