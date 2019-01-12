/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:11:13 by vfil              #+#    #+#             */
/*   Updated: 2018/06/29 14:11:14 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm> 

template< typename T >
bool	easyfind(T const conteiner, int const needle)
{
	if(find(conteiner.begin(), conteiner.end(), needle) != conteiner.end())
		return true;
	else
		return false;
}

#endif