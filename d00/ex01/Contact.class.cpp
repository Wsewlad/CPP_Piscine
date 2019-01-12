/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:12:12 by vfil              #+#    #+#             */
/*   Updated: 2018/06/18 19:02:52 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::setCfields(void)
{
	this->_cfields_names[0] = "first name";
	this->_cfields_names[1] = "last name";
	this->_cfields_names[2] = "nickname";
	this->_cfields_names[3] = "login";
	this->_cfields_names[4] = "postal address";
	this->_cfields_names[5] = "email address";
	this->_cfields_names[6] = "phone number";
	this->_cfields_names[7] = "birthday date";
	this->_cfields_names[8] = "favorite meal";
	this->_cfields_names[9] = "underwear color";
	this->_cfields_names[10] = "darkest secret";

	for (int i = 0; i < 11; i++) {
		std::cout << this->_cfields_names[i] << ":" << std::endl;
		std::getline(std::cin, this->_cfields[i]);
	}
	return;
}

void	Contact::showInfo(void)
{
	for (int i = 0; i < 11; i++)
		std::cout << this->_cfields_names[i] << ": " << this->_cfields[i] << std::endl; 
	return;
}

void	Contact::showShortInfo(void)
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (this->_cfields[i].length() > 10)
		{
			for (int j = 0; j < 9; j++)
				std::cout << this->_cfields[i][j];
			std::cout << ".";
		}
		else
			std::cout << std::setw(10) << this->_cfields[i];
	}
	std::cout << std::endl;
	return;
}
