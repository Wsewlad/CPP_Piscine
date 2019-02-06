/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:13:44 by vfil              #+#    #+#             */
/*   Updated: 2019/01/21 20:13:47 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat bob = Bureaucrat("Bob", 50);
		Bureaucrat jim = Bureaucrat("Jim", 9);
		PresidentialPardonForm fpp = PresidentialPardonForm("TestTarget");

		std::cout << bob;
		std::cout << jim;

	}
	catch (PresidentialPardonForm::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}