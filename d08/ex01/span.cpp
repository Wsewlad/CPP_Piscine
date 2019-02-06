/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 23:12:33 by vfil              #+#    #+#             */
/*   Updated: 2019/01/25 23:12:34 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : _N(N)
{
    return;
}

Span::~Span(void)
{
    return;
}

Span::Span(Span const & copy)
{
    *this = copy;
    return;
}

Span & Span::operator=( Span const & sp )
{
    this->_N = sp.getN();

    return *this;
}

unsigned int   Span::getN(void) const
{
    return this->_N;
}

void    Span::addNumber(int nb)
{
    if (this->numbers.size() < this->getN())
        this->numbers.push_back(nb);
    else
        throw std::logic_error("You try to add more then N elements...");
}

int     Span::shortestSpan(void)
{
    if (numbers.size() < 2)
        throw std::logic_error("Less than 2 element...");

    std::vector<int> tmp(numbers);

    std::sort(tmp.begin(), tmp.end());

    int min = tmp[1] - tmp[0];
    for (int i = 0; tmp[i + 1]; i++)
    {
        if (tmp[i + 1] - tmp[i] < min)
            min = tmp[i + 1] - tmp[i];
    }

    return abs(min);
}

int     Span::longestSpan(void)
{
    if (numbers.size() < 2)
        throw std::logic_error("Less than 2 element...");

    return (*std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end()));
}
