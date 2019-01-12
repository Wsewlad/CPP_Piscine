/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:07:45 by vfil              #+#    #+#             */
/*   Updated: 2018/06/27 18:07:47 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T, typename I >
void	iter(T * addr, I const & len, void (*f)(T))
{
	for (I i = 0; i < len; i++)
		f(addr[i]);
}

template< typename T >
void	print(T item)
{
	std::cout << item << std::endl;
}

int main(void)
{
	char str[] = "Helo!";
	::iter<char, int>(str, 5, print<char>);
	std::cout << std::endl;

	int ints[] = {1, 2, 3, 4, 5};
	::iter<int, int>(ints, 5, &print);
	std::cout << std::endl;

	std::string strs[] = {"This", "is", "string"};
	::iter<std::string, int>(strs, 3, &print);

	return (0);
}