/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:32:57 by vfil              #+#    #+#             */
/*   Updated: 2018/06/28 14:33:00 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <stdexcept>

template < typename T >
class Array
{
	public:

		Array< T >(void)
		{
			_array = new T;
			_sz = 0;
		}

		Array< T >(unsigned int n)
		{
			_array = new T[n];
			// for (unsigned int i = 0; i < n; i++)
			// 	_array[i] = 0;
			_sz = n;
		}

		Array< T >(Array< T > const & src)
		{
			return *this = src;
		}

		Array< T >& operator=(Array< T > const & src )
		{
			delete [] _array;
			_sz = src._sz;
			_array = new T[_sz];
			for (unsigned int i = 0; i < _sz; i++)
				_array[i] = src._array[i];
			return *this;
		}

		~Array< T >(void)
		{
			delete [] _array;
		}

		T & operator[](unsigned int i)
		{
			if (i >= _sz)
				throw std::out_of_range("oops..");
			else
				return (_array[i]);
		}

		unsigned int size(void) { return _sz; }

	private:
		unsigned int _sz;
		T *_array;

};

#endif
