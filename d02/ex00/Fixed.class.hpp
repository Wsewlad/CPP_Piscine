/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 22:54:24 by vfil              #+#    #+#             */
/*   Updated: 2019/01/16 22:55:47 by vfil             ###   ########.fr       */
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
		Fixed( std::string name );
		Fixed( Fixed const & src );
		~Fixed( void );

		std::string getName( void );

		Fixed &	operator=( Fixed const & ft );

	private:
		
		int	_foo;
}

std::osteam &	operator<<( std::osteram & o, Fixed const & i );


#endif

