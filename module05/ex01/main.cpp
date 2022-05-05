/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:42:44 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/05 15:06:39 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <stdlib.h>
#include <ctype.h>
#define EX00 0 

int		main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Usage './Form {number test}'\nNumber 1 to 3\nNumber 0 for all tests\n";
		return (1);
	}
	if (!isdigit(argv[1][0])) {
		std::cout << "Usage './Form {number test}'\nNumber 0 to 3\n";
		return (1);
	}
	
	int nb = atoi(argv[1]);
	if (nb == 1 || nb == 0) {
		std::cout << "----------------------------------------\n";
		std::cout << "-------Invalid grade FORM to high-------\n";
		std::cout << "----------------------------------------\n";
		try {
			Form		test("Form_1", 151, 2);
		}
		catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << "----------------------------------------\n";
		std::cout << "-------Invalid grade FORM to low--------\n";
		std::cout << "----------------------------------------\n";
		try {
			Form		test("Form_1", 0, 2);
		}
		catch (std::exception & e) {
			std::cout << e.what();
		}
	}
	if (nb == 2 || nb == 0) {
		try {
			std::cout << "----------------------------------------\n";
			std::cout << "----Sign Form 'Form_1' with 'Thibaut'---\n";
			std::cout << "----------------------------------------\n";
			Form	test("Form_1", 10, 2);
			Bureaucrat nb_1("Thibaut", 1);

			test.beSigned(nb_1);
			nb_1.signForm(test);
		}
		catch (std::exception & e) {
			std::cout << e.what();
		}
	}
	if (nb == 3 || nb == 0) {
			Form	test("Form_1", 10, 2);
			Bureaucrat nb_1("Thibaut", 11);
		try {
			std::cout << "----------------------------------------\n";
			std::cout << "-Can't Sign Form 'Form_1' with 'Thibaut'\n";
			std::cout << "----------------------------------------\n";

			test.beSigned(nb_1);
		}
		catch (std::exception & e) {
			std::cout << e.what();
		}
			nb_1.signForm(test);
	}

	// std::cout << nb_1;
	
	return (0);
}