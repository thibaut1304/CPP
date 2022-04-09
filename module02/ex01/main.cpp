/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:14:39 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/09 18:09:37 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main(void)
{
	// Fixed 		a;
	Fixed const b(10);
	// Fixed const c(42.42f);
	// Fixed const d(b);

	// a = Fixed(1234.4321f);

	// std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;

	std::cout << "b is " << b.getRawBits() << std::endl;

	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << c.toFloat() << " as float" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// int 		bits  = 8;
	// // Fixed	a(10.10f);
	// int		b(10);
	// int		c = (b << bits);
	// // std::cout << a << std::endl;

	// std::cout << b << std::endl;
	// std::cout << c << std::endl;
	// std::cout << (c / (1 << bits)) << std::endl;

	// std::cout << a.toInt() << std::endl;

	return (0);
}
