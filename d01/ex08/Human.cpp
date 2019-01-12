/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 16:32:37 by vfil              #+#    #+#             */
/*   Updated: 2018/06/20 16:32:38 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Human.hpp"
#include <iostream>

void	Human::meleeAttack(std::string const & target)
{
	std::cout << target << std::endl;
	return;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << target << std::endl;
	return;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << target << std::endl;
	return;
}


void	Human::action(std::string const & action_name, std::string const & target)
{
	
}