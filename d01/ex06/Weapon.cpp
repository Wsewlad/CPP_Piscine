/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 13:45:17 by vfil              #+#    #+#             */
/*   Updated: 2018/06/20 14:34:44 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string tp) : _type(tp)
{
}

Weapon::~Weapon(void)
{
}

std::string const&	Weapon::getType(void)
{
	return this->_type;
}

void				Weapon::setType(std::string tp)
{
	this->_type = tp;
	return;
}
