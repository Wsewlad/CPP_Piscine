/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:38:37 by vfil              #+#    #+#             */
/*   Updated: 2018/06/19 14:40:18 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <string>

class Pony
{
	public:
		Pony(void);
		~Pony(void);
		void		sing(void);
		void		setName(std::string nm);
		void		showName(void);
		
	private:
		std::string	name;
};

#endif
