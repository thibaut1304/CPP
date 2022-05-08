/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:26:22 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/08 23:10:19 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : AForm("Presidential Pardon", 25, 5),  _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src), _target(src._target) {

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	if (this != &rhs) {
		*this = rhs;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void					PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	AForm::execute(executor);
	std::cout << "Informs that the " << this->_target << " has been forgiven by Zaphod Beeblebrox\n";
}
