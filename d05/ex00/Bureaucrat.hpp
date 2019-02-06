/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:10:37 by vfil              #+#    #+#             */
/*   Updated: 2019/01/21 20:10:55 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <iostream>
# include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat( void );

		std::string getName( void ) const;
		int			getGrade( void ) const;
		void		incGrade( void );
		void		decGrade( void );

		Bureaucrat &	operator=( Bureaucrat const & ft );

		class GradeTooHighException : public std::exception
		{
			public:
				const char * what () const throw ()
				{
					return ("Grade is too high!");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char * what () const throw ()
				{
					return ("Grade is too low!");
				}
		};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i );


#endif
