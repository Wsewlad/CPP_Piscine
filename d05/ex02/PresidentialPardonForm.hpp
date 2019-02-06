#ifndef	PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Form.hpp"

class PresidentialPardonForm : public Form
{

public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm&	operator=(PresidentialPardonForm const & ft);

    void        execute(Bureaucrat const & executor) const;
    std::string getTarget(void);

private:
    std::string _target;

};

std::ostream &	operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif