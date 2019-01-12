/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:11:10 by vfil              #+#    #+#             */
/*   Updated: 2018/06/19 20:24:33 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* pstr = &str;
	std::string& rstr = str;
	std::cout << "Just string: " << str << std::endl;
	std::cout << "Using the pointer: " << *pstr << std::endl;
	std::cout << "Using the reference: " << rstr << std::endl;
	return (0);
}
