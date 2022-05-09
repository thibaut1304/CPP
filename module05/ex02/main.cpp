/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:42:44 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/09 13:08:10 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <ctype.h>

void	Robot(Bureaucrat supervisor, Bureaucrat francis) {
	std::cout << supervisor;
	std::cout << francis;
	std::cout << std::endl;
	RobotomyRequestForm robot = RobotomyRequestForm("Francis");
	std::cout << robot << std::endl;
	try {
		francis.signForm(robot);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		francis.executeForm(robot);
	} catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		supervisor.signForm(robot);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		supervisor.executeForm(robot);
	} catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
}

void	Presidential(Bureaucrat supervisor) {
	std::cout << supervisor << std::endl;
	PresidentialPardonForm pres = PresidentialPardonForm("Francis");
	std::cout << pres << std::endl;
	try {
		supervisor.signForm(pres);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		supervisor.executeForm(pres);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	while(supervisor.getGrade() > 1)
		supervisor.gradeDecrement();
	std::cout << std::endl << supervisor << std::endl;
	try {
		supervisor.signForm(pres);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		supervisor.executeForm(pres);
	} catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
}

void	Shrubbery(Bureaucrat supervisor, Bureaucrat francis) {
	std::cout << supervisor;
	std::cout << francis;
	std::cout << std::endl;
	ShrubberyCreationForm shrubbery = ShrubberyCreationForm("Maison");
	std::cout << shrubbery << std::endl;
	try {
		supervisor.signForm(shrubbery);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		supervisor.executeForm(shrubbery);
	} catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	ShrubberyCreationForm shrubbery_2 = ShrubberyCreationForm("bateau");
	std::cout << std::endl << shrubbery_2 << std::endl;
	try {
		francis.signForm(shrubbery_2);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		francis.executeForm(shrubbery_2);
	} catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
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
	if (nb == 0 || nb == 1) {
	std::cout << "-----------------" << std::endl;
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
