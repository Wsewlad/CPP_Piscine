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

        virtual void    execute(Bureaucrat const & executor) const = 0;

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

        class FormIsNotSignedException : public std::exception
        {
        public:
            const char * what () const throw ()
            {
                return "Form is not signed!";
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