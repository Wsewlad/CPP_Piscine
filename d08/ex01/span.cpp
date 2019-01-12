/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:53:21 by vfil              #+#    #+#             */
/*   Updated: 2018/06/29 15:53:22 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <stdexcept>
#include <iostream>

Span::Span() {}

Span::Span(unsigned int n) : _n(n)
{}

Span::Span(Span const & src)
{
	*this = src;
}

Span::~Span() {};

Span & Span::operator=(Span const & src)
{
	_n = src._n;
	_ints = src._ints;

	return *this;
}

void	Span::addNumber(int nb)
{
	if (_ints.size() <= _n)
		_ints.push_front(nb);
	else
		throw std::length_error("No space!");
}

int 	Span::shortestSpan(void)
{
	std::list<int> copy = _ints;
	copy.sort();
	int min = *std::max_element(_ints.begin(), _ints.end());

	for (std::list<int>::iterator it1 = copy.end(); it1 != copy.begin(); it1--)
		for (std::list<int>::iterator it2 = copy.end(); it2 != copy.begin(); it2--)
		{
			std::cout << *it1 << " - " << *it2 << " = " << (*it1 - *it2) << std::endl;
			if ((*it1 - *it2) < min && (*it1 - *it2) >= 0 && it1 != it2)
				min = (*it1 - *it2);
		}
	return min;
}

int 	Span::longestSpan(void)
{
	return (
		*std::max_element(_ints.begin(), _ints.end())
		 - 
		*std::min_element(_ints.begin(), _ints.end())
	);
}