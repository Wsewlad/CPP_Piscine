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
	return;
}

Fixed::Fixed( int const const_int )
{
	this->setRawBits(const_int << this->_frt_bits);
	return;
}

Fixed::Fixed( float const const_float )
{
	this->setRawBits((int)std::roundf(const_float * (1 << this->_frt_bits)));
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
    return;
}

Fixed::Fixed( Fixed const & src)
{
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
	this->_fp_value = ft.getRawBits();

	return (*this);
}


bool	Fixed::operator>( Fixed const & ft )
{
	return (this->getRawBits() > ft.getRawBits());
}

bool	Fixed::operator<( Fixed const & ft )
{
	return (this->getRawBits() < ft.getRawBits());
}

bool	Fixed::operator>=( Fixed const & ft )
{
	return (this->getRawBits() >= ft.getRawBits());
}

bool	Fixed::operator<=( Fixed const & ft )
{
	return (this->getRawBits() <= ft.getRawBits());
}

bool	Fixed::operator==( Fixed const & ft )
{
	return (this->getRawBits() == ft.getRawBits());
}

bool	Fixed::operator!=( Fixed const & ft )
{
	return (this->getRawBits() != ft.getRawBits());
}



Fixed 	Fixed::operator+( Fixed const & ft ) const
{
	return Fixed(this->toFloat() + ft.toFloat());

}

Fixed 	Fixed::operator-( Fixed const & ft ) const
{
	return Fixed(this->toFloat() - ft.toFloat());
}

Fixed 	Fixed::operator*( Fixed const & ft ) const
{
	return Fixed(this->toFloat() * ft.toFloat());
}

Fixed 	Fixed::operator/( Fixed const & ft ) const
{
	return Fixed(this->toFloat() / ft.toFloat());
}




Fixed &	Fixed::operator++()
{
	this->_fp_value++;
	return *this;
}

Fixed &	Fixed::operator--()
{
	this->_fp_value--;
	return *this;
}

Fixed 	Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}



Fixed 	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}



std::ostream & operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}
