/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:38:44 by vfil              #+#    #+#             */
/*   Updated: 2018/06/19 14:50:59 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony*	jane = new Pony();
	jane->sing();
	jane->setName("Jane");
	jane->showName();
	jane->sing();

	delete jane;
}

void	ponyOnTheStack(void)
{
	Pony	lui = Pony();
	lui.sing();
	lui.setName("Lui");
	lui.showName();
	lui.sing();
}

int	main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();

	return (0);
}
