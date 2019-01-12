/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:06:47 by vfil              #+#    #+#             */
/*   Updated: 2018/06/19 18:01:29 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
		void	randomChump(void);
		
		std::string type;
};

#endif
