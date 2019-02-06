/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 22:05:50 by vfil              #+#    #+#             */
/*   Updated: 2019/01/22 22:06:07 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_H
# define FORM_H

# include <string>
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const & src);
		~Form(void);
		Form&	operator=(Form const & ft);

		std::string getName(void) const;
        bool        getIsSigned(void) const;
        int         getGradeToSign(void) const;
        int         getGradeToExecute(void) const;

        void        beSigned(Bureaucrat & br);

        class GradeTooHighException : public std::exception
        {
            public:
                const char * what () const throw ()
                {
                    return "Grade is too high!";
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char * what () const throw ()
                {
                    return "Grade is too low!";
                }
        };

	private:
        std::string const   _name;
        bool                _isSigned;
        int const           _gradeToSign;
        int const           _gradeToExecute;

};

std::ostream &	operator<<( std::ostream & o, Form const & i );

#endif
