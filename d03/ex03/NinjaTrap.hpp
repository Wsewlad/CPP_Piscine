/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 22:01:38 by vfil              #+#    #+#             */
/*   Updated: 2018/06/22 22:01:39 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);

		NinjaTrap&	operator=(NinjaTrap const & nj);

		void		ninjaShoebox(FragTrap const & nj);
		void		ninjaShoebox(ScavTrap const & nj);
		void		ninjaShoebox(NinjaTrap const & nj);
};

#endif