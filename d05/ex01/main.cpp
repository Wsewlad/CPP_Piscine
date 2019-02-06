/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:13:44 by vfil              #+#    #+#             */
/*   Updated: 2019/01/22 22:06:28 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form form1 = Form("Form1", 10, 15);
		Bureaucrat bob = Bureaucrat("Bob", 50);
		Bureaucrat jim = Bureaucrat("Jim", 9);

		std::cout << form1;
		std::cout << bob;
		std::cout << jim;
		jim.signForm(form1);

		bob.signForm(form1);
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
