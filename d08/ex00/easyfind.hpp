/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 20:12:40 by vfil              #+#    #+#             */
/*   Updated: 2019/01/25 20:12:45 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>

template < typename T >
typename T::iterator easyfind(T & container, int val)
{
    return std::find(container.begin(), container.end(), val);
}

#endif