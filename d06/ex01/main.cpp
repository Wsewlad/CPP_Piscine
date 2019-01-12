/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 18:23:00 by vfil              #+#    #+#             */
/*   Updated: 2018/06/26 18:23:01 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void * serialize( void )
{
	srand(time(NULL));
	std::string rstr = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWZYZ";
	void * res = operator new (sizeof(char) * 16 + sizeof(int));
	for (int i = 0; i < 8; i++)
		reinterpret_cast<char*>(res)[i] = rstr[rand() % 62];
	reinterpret_cast<int*>(res)[8] = rand();
	for (int i = 12; i < 20; i++)
		reinterpret_cast<char*>(res)[i] = rstr[rand() % 62];
	return (res);
}

Data * deserialize( void * raw )
{
	Data *data = new Data;
	for (int i = 0; i < 8; i++)
		data->s1.push_back(reinterpret_cast<char*>(raw)[i]);
	data->n = reinterpret_cast<int*>(raw)[8];
	for (int i = 12; i < 20; i++)
		data->s2.push_back(reinterpret_cast<char*>(raw)[i]);
	return (data);
}

int main(void)
{
	void	*raw = serialize();
	Data * 	data = deserialize(raw);
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n:  " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	return (0);
}