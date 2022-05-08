/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:42:44 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/08 23:39:31 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <ctype.h>

#define EX00 0

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	// srand(time(NULL));

	Bureaucrat supervisor("Supervisor", 30);
	// std::cout << supervisor;
	Bureaucrat francis("Francis", 150);
	// std::cout << francis;

	// PresidentialPardonForm pres = PresidentialPardonForm("Francis");
	// std::cout << pres;
	// try {
	// 	supervisor.signForm(pres);
	// } catch(std::exception const &e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// try {
	// 	pres.execute(supervisor);
	// } catch(std::exception const &e){
	// 	std::cerr << e.what() << std::endl;
	// }
	// std::cout << supervisor;
	// try {
	// 	supervisor.signForm(pres);
	// } catch(std::exception const &e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// try {
	// 	pres.execute(supervisor);
	// } catch(std::exception const &e){
	// 	std::cerr << e.what() << std::endl;
	// }

	std::cout << std::endl << "-----------------" << std::endl;
	std::cout << std::endl;
	RobotomyRequestForm robot = RobotomyRequestForm("Francis");
	try {
		francis.signForm(robot);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		robot.execute(francis);
	} catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}
	try {
		supervisor.signForm(robot);
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		robot.execute(supervisor);
	} catch(std::exception const &e){
		std::cerr << e.what() << std::endl;
	}

	// std::cout << std::endl << "-----------------" << std::endl;
	// std::cout << std::endl;
	// ShrubberyCreationForm shrubbery = ShrubberyCreationForm("Maison");
	// try {
	// 	supervisor.signForm(shrubbery);
	// } catch(std::exception const &e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// try {
	// 	shrubbery.execute(supervisor);
	// } catch(std::exception const &e){
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << std::endl << "-----------------" << std::endl;
	// std::cout << std::endl;
	// try
	// {
	// 	PresidentialPardonForm pres = PresidentialPardonForm("Francis");
	// 	std::cout << pres;
	// 	std::cout << francis;
	// 	std::cout << supervisor;
	// 	supervisor.signForm(pres);
	// 	francis.executeForm(pres);
	// }
	// catch(std::exception const &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// std::cout << std::endl;
	// try
	// {
	// 	PresidentialPardonForm pres = PresidentialPardonForm("Francis");
	// 	std::cout << pres;
	// 	supervisor.signForm(pres);
	// 	supervisor.executeForm(pres);
	// }
	// catch(std::exception const &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	return (0);
}
