/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:42:44 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/04 12:34:48 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	try {
		Bureaucrat nb_1("Thibaut", 0);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		Bureaucrat nb_1("Thibaut", 151);
	}
	catch (std::exception &e ) {
		std::cout << e.what();
		
	}
	std::cout << " ------------------------------------- \n";
	std::cout << " ------------------------------------- \n";
	{
		Bureaucrat nb_1("Thibaut", 1);
		Bureaucrat nb_2("Gab", 150);

		try {
			nb_1.gradeDecrement();
		}
		catch (std::exception & e) {
			std::cout << e.what();
		}
		
		try {
			nb_2.gradeIncrement();
		}
		catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << " ------------------------------------- \n";
		std::cout << nb_1;
		std::cout << nb_2;
		std::cout << " ------------------------------------- \n";
	}
	{
		Bureaucrat nb_1("Thibaut", 1);
		Bureaucrat nb_2("Gab", 150);

		try {
			nb_1.gradeIncrement();
		}
		catch (std::exception & e) {
			std::cout << e.what();
		}
		
		try {
			nb_2.gradeDecrement();
		}
		catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << " ------------------------------------- \n";
		std::cout << nb_1;
		std::cout << nb_2;
		std::cout << " ------------------------------------- \n";
	}
	return (0);
}