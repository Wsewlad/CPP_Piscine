/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:11:06 by vfil              #+#    #+#             */
/*   Updated: 2019/01/21 20:11:11 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Span::Span(unsigned int N)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Span::~Span( void )
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Span::Span( Span const & copy )
{
	*this = copy;
	return;
}



std::string Bureaucrat::getName( void ) const
{
	return this->_name;
}

int			 Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}



void		Bureaucrat::incGrade( void )
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void		Bureaucrat::decGrade( void )
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}


void		Bureaucrat::signForm(Form & fm)
{
	try
	{
		fm.beSigned(*this);
		std::cout << this->getName() << " signs " << fm.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->getName() << " cannot sign " << fm.getName() << " because " << e.what() << std::endl;
	}
}


Bureaucrat & Bureaucrat::operator=( Bureaucrat const & ft )
{
	this->_grade = ft.getGrade();

	std::cout << ft.getName() << " assigned" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}