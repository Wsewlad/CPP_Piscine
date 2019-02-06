/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 23:12:46 by vfil              #+#    #+#             */
/*   Updated: 2019/01/25 23:12:49 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <vector>
# include <stdexcept>
# include <algorithm>
# include <iostream>

class Span
{
    public:
        Span(unsigned int N);
        ~Span(void);
        Span(Span const & copy);
        Span & operator=( Span const & sp );

        void    addNumber(int nb);
        unsigned int   getN(void) const;
        int shortestSpan(void);
        int longestSpan(void);

        template <typename R>
        void addRange(R start, R end)
        {
            R i = start;
            while (i != end)
            {
                addNumber(*i);
                i++;
            }
        }

    private:
        unsigned int _N;
        std::vector<int> numbers;
};



#endif
