/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 23:11:55 by vfil              #+#    #+#             */
/*   Updated: 2019/01/25 23:11:58 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <list>
#include <stack>
#include <iterator>


template <typename T>

class MutantStack : public std::stack <T>
{
public:
	typedef typename std::deque<T>::iterator iterator;

	MutantStack(void){};
	MutantStack(unsigned int n);

	MutantStack  & operator=(MutantStack const & assignment){
		this->c = assignment.c;
		return *this;
	}
	~MutantStack(){};

	MutantStack(MutantStack const & copy)
	{
		this->c = copy.c;
	}

	iterator begin()
	{
		return std::begin(this->c);
	}

	iterator end()
	{
		return std::end(this->c);
	}

};

#endif
