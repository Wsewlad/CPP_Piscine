#ifndef	FORM_H
# define FORM_H

# include <string>
# include <iostream>
# include <stdexcept>

class Form
{

	public:
		Form(void);
		Form(std::string name, gradeToSign, gradeToExecute);
		Form(Form const & src);
		~Form(void);
		Form&	operator=(Form const & ft);

		std::string getName(void) const;
        bool        getIsSigned(void);
        int         getGradeToSign(void) const;
        int         getGradeToExecute(void) const;

        bool        beSigned(Bureaucrat const & br);

        class GradeTooHighException : public std::exception
        {
            const char * what () const throw ()
            {
                return "Grade is too high!";
            }
        }
        class GradeTooLowException : public std::exception
        {
            const char * what () const throw ()
            {
                return "Grade is too low!";
            }
        }

	private:
        std::string const   _name;
        bool                _isSigned;
        int const           _gradeToSign;
        int const           _gradeToExecute;

};

#endif