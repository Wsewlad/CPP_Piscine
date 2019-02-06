#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
        : _target("Empty"), _name("PresidentialPardonForm"), _isSigned(false), _gradeToSign(25), _gradeToExecute(5)
{
    std::cout << "Constructor called for " << this->getName() << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
        : _target(target), _name("PresidentialPardonForm"), _isSigned(false), _gradeToSign(25), _gradeToExecute(5)
{
    std::cout << "Constructor called for " << this->getName() << std::endl;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "Destructor called for " << this->getName() << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
        : _name("PresidentialPardonForm"), _isSigned(false), _gradeToSign(25), _gradeToExecute(5)
{
    *this = src;
    return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & ft )
{
    this->_isSigned = ft.getIsSigned();
    std::cout << ft.getName() << " assigned" << std::endl;
    return *this;
}

std::string PresidentialPardonForm::getTarget(void)
{
    return this->_target;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->beSigned())
    {
        if (executor.getGrade() < this->getGradeToExecute())
            std::cout << this->getTarget() << "has been pardoned by Zaphod Beeblebrox." << std::endl;
        else
            throw PresidentialPardonForm::GradeTooLowException();
    }
    else
        throw PresidentialPardonForm::FormIsNotSignedException();
}






std::ostream &	operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
    o << i.getName() << ", grade required to sign: " << i.getGradeToSign() << ", grade required to execute: " << i.getGradeToExecute() << "." << std::endl;
    return o;
}