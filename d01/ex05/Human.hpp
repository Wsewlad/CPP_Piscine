/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 11:06:43 by vfil              #+#    #+#             */
/*   Updated: 2018/06/20 13:28:09 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human
{
	public:
		Human();
		Brain const	&getBrain(void);
		std::string	identify(void) const;

	private:
		Brain const _hbrain;

};

#endif
