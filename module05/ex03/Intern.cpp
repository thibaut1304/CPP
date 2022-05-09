/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:17:50 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/09 15:16:27 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern() {

}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern		&Intern::operator=(Intern const & rhs) {
	if (this != &rhs) {
		*this = rhs;
	}
	return (*this);
}

Intern::~Intern() {
	
}

const char		*Intern::NameFormError::what() const throw() {
	return ("Error name Form !\n");	
}

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Form			*Intern::makeForm(std::string const nameForm, std::string const targetForm) {
	std::string tab[3] = {"Presidential pardon", "Robotomy request", "Shrubbery creation"};
	int i;
	for (i = 0; i < 3 ; i++)  {
		if (tab[i] == nameForm)
			break ;
	}
	switch (i) {
		case 0:
			std::cout << "Intern creates " << nameForm << " !" << std::endl;
			return(new PresidentialPardonForm(targetForm));
			// make form president !
			break ;
		case 1:
			std::cout << "Intern creates " << nameForm << " !" << std::endl;
			return(new RobotomyRequestForm(targetForm));
			// make form robotomy !
			break ;
		case 2:
			std::cout << "Intern creates " << nameForm << " !" << std::endl;
			return(new ShrubberyCreationForm(targetForm));
			// make form rbuste !
			break ;
		default:
			throw Intern::NameFormError();
			break ;
	}
	return (NULL);
}

