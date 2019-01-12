/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:07:50 by vfil              #+#    #+#             */
/*   Updated: 2018/06/27 15:07:51 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

class Base { public: virtual ~Base(void){}; };

class A : public Base {};

class B : public Base {};

class C : public Base {};


Base * generate(void)
{
	srand(time(NULL));
	int r = rand() % 3;
	switch(r)
	{
		case 0:
			std::cout << "A created" << std::endl;
			return (new A);
		case 1:
			std::cout << "B created" << std::endl;
			return (new B);
		case 2:
			std::cout << "C created" << std::endl;
			return (new C);
		default:
			break;
	}
	return (0);
}

void identify_from_pointer( Base * p )
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Undefined type" << std::endl;
}

void identify_from_reference( Base & p )
{
	A *a = dynamic_cast<A*>(&p);
	B *b = dynamic_cast<B*>(&p);
	C *c = dynamic_cast<C*>(&p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Undefined type" << std::endl;
}

int	main(void)
{
	Base * type = generate();
	identify_from_pointer(type);
	identify_from_reference(*type);
	return (0);
}