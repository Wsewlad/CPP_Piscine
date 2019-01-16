/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 22:54:16 by vfil              #+#    #+#             */
/*   Updated: 2019/01/16 22:57:03 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void )
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed( Fixed const & src)
{
	*this = src;
	return;
}

std::string Fixed::getName( void )
{
	return this->_name;
}
Fixed & Fixed::operator=( Fixed const & ft )
{
	

	std::cout << ft._name << " assigned" << std::endl;
	return *this;
}

