/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:32:14 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/09 12:44:47 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("Robotomy", 72, 45), _target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src), _target(src._target) {

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	if (this != &rhs) {
		*this = rhs;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void				RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	int v1 = rand() % 100;
	
	Form::execute(executor);
	std::cout << "Bzzzzzzz Bzzzzzzz\n";
	if ((v1 % 2) == 0)
		std::cout << this->_target << " has been robotomized\n";
	else
		std::cout << this->_target << " was not robotomized\n";
}
