/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 22:54:24 by vfil              #+#    #+#             */
/*   Updated: 2019/01/17 22:26:35 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <string>
# include <iostream>

class Fixed
{

	public:
		Fixed( void );
		Fixed( Fixed const & src );
		Fixed( int const const_int );
		Fixed( float const const_float );

		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed &	operator=( Fixed const & ft );

	private:
		
		int					_fp_value;
		static const int	_frt_bits = 8;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & i );

#endif
