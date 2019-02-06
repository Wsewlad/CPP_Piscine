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

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Default"), _grade(1)
{
	std::cout << "Constructor called for " << this->getName() << std::endl;
	return;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();

	this->_grade = grade;
	std::cout << "Constructor called for " << this->getName() << std::endl;
	return;
}

Bureaucrat::~Bureaucrat( void )
{
    std::cout << "Destructor called for " << this->getName() << std::endl;
    return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
	*this = src;
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