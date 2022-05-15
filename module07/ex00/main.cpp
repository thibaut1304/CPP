/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:40:45 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/15 13:55:45 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	t_float_double() {
	float a = 3.5f;
	float b = 3.2f;

	std::cout << "Original : a = " << a << ", b = " << b << std::endl;
	::swap(a, b);	
	std::cout << "Swap     : a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	double c = 21.21;
	double d = 42.42;
	std::cout << "Original : c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "Swap     : c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

void	subject() {
	int a = 2;
	int b = 3;

	std::cout << "Original : a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "Swap     : a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "Original : c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "Swap     : c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl;
}

int main( void ) {
	subject();
	t_float_double();
	return 0;
}