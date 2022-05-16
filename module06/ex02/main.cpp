/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:40:35 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/16 11:29:00 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void) {
	int i = rand() % 3;

	Base *base = NULL;
	switch (i)
	{
	case 1:
			base = new A();
			std::cout << "A class has been generated : ";
			break;
	case 2:
			base = new B();
			std::cout << "B class has been generated : ";
			break;
	default:
			base = new C();
			std::cout << "C class has been generated : ";
			break;
	}
	return (base);
}

void identify(Base* p) {
    if (dynamic_cast<A *>(p))
        std::cout << "A";
    else if (dynamic_cast<B *>(p))
        std::cout << "B";
    else
        std::cout << "C";
}

void identify(Base& p) {
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A";
	}
	catch(std::exception &e) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B";
	}
	catch(std::exception &e) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C";
	}
	catch(std::exception &e) {}
}

int main()
{
	for(int i = 0; i < 8; i++)
	{
		Base *base = generate();
		identify(base);
		std::cout << " ";
		identify(*base);
		std::cout << std::endl;
		delete(base);
	}
	return 0;
}
