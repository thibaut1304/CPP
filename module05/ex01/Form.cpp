/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:00:01 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/06 11:22:31 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int signe, int execute) : _name(name),  _signed(false), _gradeSigned(signe), _gradeExecute(execute) {
	if (this->_gradeSigned > 150 || this->_gradeSigned > 150)
		throw Form::GradeTooHighException();
	else if (this->_gradeExecute <= 0 || this->_gradeSigned <= 0)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) : _name(src._name), _signed(false), _gradeSigned(src._gradeSigned), _gradeExecute(src._gradeExecute) {
	if (src._gradeSigned > 150 || src._gradeSigned > 150)
		throw Form::GradeTooHighException();
	else if (src._gradeExecute <= 0 || src._gradeSigned <= 0)
		throw Form::GradeTooLowException();
}

Form			&Form::operator=(Form const & rhs) {
	if (this != &rhs) {
		if (rhs._gradeSigned > 150 || rhs._gradeSigned > 150)
			throw Form::GradeTooHighException();
		else if (rhs._gradeExecute <= 0 || rhs._gradeSigned <= 0)
			throw Form::GradeTooLowException();
		*this = rhs;
	}
	return (*this);
}
void			Form::beSigned(Bureaucrat const & src) {
	if (src.getGrade() > this->_gradeSigned) {
		throw Form::GradeTooLowException();
	}
	else {
		this->_signed = true;
	}
}

const char		*Form::GradeTooHighException::what() const throw() {
	return ("Grade too high !\n");
}

const char		*Form::GradeTooLowException::what() const throw() {
	return ("Grade too low !\n");
}

std::string		Form::getName(void) const {
	return (this->_name);
}

bool			Form::getSigned(void) const {
	return (this->_signed);
}

int		Form::getGradeSigned(void) const {
	return (this->_gradeSigned);
}

int		Form::getGradeExecute(void) const {
	return (this->_gradeExecute);
}

Form::~Form() {
	
}

std::ostream	&operator<<(std::ostream & o, Form const & rhs) {
	std::string str;
	
	if (rhs.getSigned() == 1)
		str.append("yes");
	else
		str.append("no");
	o << "Form name : " << rhs.getName() << " ";
	o << "is signed : " << str << std::endl;
	o << "Level for signe form : " << rhs.getGradeSigned() << " and level for execute " << rhs.getGradeExecute() << std::endl;
	return (o);
}
