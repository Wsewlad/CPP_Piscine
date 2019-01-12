/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 11:11:28 by vfil              #+#    #+#             */
/*   Updated: 2018/06/20 13:28:06 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Brain const	&Human::getBrain(void)
{
	return this->_hbrain;
}

std::string	Human::identify(void) const
{
	return _hbrain.identify();
}
