/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 22:54:16 by vfil              #+#    #+#             */
/*   Updated: 2019/01/17 22:26:42 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed( void ) : _fp_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( int const const_int )
{
	this->setRawBits(const_int << this->_frt_bits);

	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed( float const const_float )
{
	this->setRawBits((int)std::roundf(const_float * (1 << this->_frt_bits)));

	std::cout << "Float constructor called" << std::endl;
	return;
}





float Fixed::toFloat( void ) const
{
	return (float)this->_fp_value / (1 << this->_frt_bits);
}

int Fixed::toInt( void ) const
{
	return (this->_fp_value >> this->_frt_bits);
}




Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}



int		Fixed::getRawBits( void ) const
{
	return this->_fp_value;
}

void	Fixed::setRawBits( int const raw)
{
	this->_fp_value = raw;
}




Fixed & Fixed::operator=( Fixed const & ft )
{
	std::cout << "Assignation operator called" << std::endl;

	this->_fp_value = ft.getRawBits();

	return (*this);
}



std::ostream & operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}
