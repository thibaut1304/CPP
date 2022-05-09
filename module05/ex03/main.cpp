/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:42:44 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/09 15:37:21 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <ctype.h>

void	Robot(Bureaucrat supervisor, Bureaucrat francis) {
	std::cout << supervisor;
	std::cout << francis;
	std::cout << std::endl;
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("Robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	try {
		francis.signForm(*rrf);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		francis.executeForm(*rrf);
	} catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		supervisor.signForm(*rrf);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		supervisor.executeForm(*rrf);
	} catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	delete rrf;
}

void	Presidential(Bureaucrat supervisor) {
	std::cout << supervisor << std::endl;
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("Presidential pardon", "Emmanuel");
	std::cout << *rrf << std::endl;
	try {
		supervisor.signForm(*rrf);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		supervisor.executeForm(*rrf);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	while(supervisor.getGrade() > 1)
		supervisor.gradeDecrement();
	std::cout << std::endl << supervisor << std::endl;
	try {
		supervisor.signForm(*rrf);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		supervisor.executeForm(*rrf);
	} catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	delete rrf;
}

void	Shrubbery(Bureaucrat supervisor, Bureaucrat francis) {
	std::cout << supervisor;
	std::cout << francis;
	std::cout << std::endl;
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("Shrubbery creation", "maison");
	std::cout << *rrf << std::endl;
	
	try {
		supervisor.signForm(*rrf);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		supervisor.executeForm(*rrf);
	} catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	delete rrf;
	
	Intern someRandomIntern_2;
	Form* rrf_2;
	rrf_2 = someRandomIntern_2.makeForm("Shrubbery creation", "bateau");
	std::cout << std::endl << *rrf_2 << std::endl;
	try {
		francis.signForm(*rrf_2);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		francis.executeForm(*rrf_2);
	} catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	delete rrf_2;
}
	
int		main(int argc, char **argv)
{
	if (argc != 2 || !isdigit(argv[1][0])) {
		std::cout << "Usage './Form {number test}'\nNumber 1 to 3\nNumber 0 for all tests\n";
		return (1);
	}
	int nb = atoi(argv[1]);
	if (nb < 0 || nb > 3) {
		std::cout << "Usage './Form {number test}'\nNumber 0 to 3\nNumber 0 for all tests\n";
		return (1);
	}
	srand(time(NULL));
	
	Bureaucrat supervisor("Supervisor", 30);
	Bureaucrat francis("Francis", 150);
	std::cout << " -----------------------------\n";
	std::cout << " ---------WRONG FORM----------\n";
	std::cout << " -----------------------------\n";
	
	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Nimp", "Bender");
		std::cout << *rrf;
		delete rrf;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	
	if (nb == 0 || nb == 1) {
	std::cout << " -----------------------------\n";
		Robot(supervisor, francis);
	}
	if (nb == 0 || nb == 2) {
	std::cout << std::endl << "-----------------" << std::endl;
		Presidential(supervisor);
	}
	if (nb == 0 || nb == 3) {
	std::cout << std::endl << "-----------------" << std::endl;
		Shrubbery(supervisor, francis);
	}
	
	return (0);
}
