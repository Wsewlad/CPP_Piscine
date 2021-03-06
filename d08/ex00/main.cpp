/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 20:12:34 by vfil              #+#    #+#             */
/*   Updated: 2019/01/25 20:12:36 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main (void)
{
    int ints[] = { 10, 20, 30, 40 };

    std::vector<int> testvector (ints, ints+4);

    std::vector<int>::iterator it;
    it = easyfind(testvector, 30);
    if (it != testvector.end())
        std::cout << "Element found in testvector: " << *it << '\n';
    else
        std::cout << "Element not found in testvector" << std::endl;

    return (0);
}