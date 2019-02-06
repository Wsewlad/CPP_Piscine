/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 22:06:11 by vfil              #+#    #+#             */
/*   Updated: 2019/01/22 22:06:20 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
	: _name("Default"), _isSigned(false), _gradeToSign(15), _gradeToExecute(10)
{
	std::cout << "Constructor called for " << this->getName() << std::endl;
	return;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();

	std::cout << "Constructor called for " << this->getName() << std::endl;
	return;
}

Form::~Form(void)
{
    std::cout << "Destructor called for " << this->getName() << std::endl;
    return;
}

Form::Form(Form const & src)
	: _name("Default"), _isSigned(false), _gradeToSign(15), _gradeToExecute(10)
{
	*this = src;
	return;
}



std::string Form::getName(void) const
{
	return this->_name;
}

bool        Form::getIsSigned(void) const
{
	return this->_isSigned;
}

int         Form::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

int         Form::getGradeToExecute(void) const
{
	return this->_gradeToExecute;
}


void        Form::beSigned(Bureaucrat & br)
{
	if (br.getGrade() <= this->getGradeToSign())
	{
		this->_isSigned = true;
	}
	else
		throw Form::GradeTooLowException();
}



Form & Form::operator=( Form const & ft )
{
	this->_isSigned = ft.getIsSigned();
	std::cout << ft.getName() << " assigned" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << ", grade required to sign: " << i.getGradeToSign() << ", grade required to execute: " << i.getGradeToExecute() << "." << std::endl;
	return o;
}
