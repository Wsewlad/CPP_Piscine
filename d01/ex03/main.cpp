/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:14:46 by vfil              #+#    #+#             */
/*   Updated: 2018/06/19 20:09:37 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <ctime>
#include <string>

int	main(void)
{
	srand(time(0));
	ZombieHorde evil(10);
	evil.announce();
	return(0);
}
