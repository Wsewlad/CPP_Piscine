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

int	main(void)
{
	try
	{
//		Bureaucrat b1 = Bureaucrat("b1", 1);
//		std::cout << b1;
//		b1.incGrade();
//		std::cout << b1.getGrade() << std::endl;
//
//		Bureaucrat b2 = Bureaucrat("b2", 0);
//		std::cout << b2;
//
//		Bureaucrat b3 = Bureaucrat("b3", 100);
//		std::cout << b3;

		Bureaucrat b4 = Bureaucrat("b4", 150);
		b4.decGrade();

		Bureaucrat b5 = Bureaucrat("b5", 151);
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception!!!" << std::endl;
	}
	return (0);
}