/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:53:27 by vfil              #+#    #+#             */
/*   Updated: 2018/06/29 15:53:28 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <list>

class Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(Span const & src);
		~Span();

		Span& operator=(Span const & src);

		void	addNumber(int nb);
		int 	shortestSpan(void);
		int 	longestSpan(void);

	private:
		unsigned int _n;
		std::list<int> _ints;
};

#endif