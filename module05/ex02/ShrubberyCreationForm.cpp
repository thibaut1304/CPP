/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:34:25 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/09 12:45:24 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <string.h>
#include <stdlib.h>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("Shrubbery", 145, 137), _target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src), _target(src._target) {

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	if (this != &rhs) {
		*this = rhs;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

void				ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::string const fileName(this->_target + "_shrubbery");
	std::ofstream myFile;
	myFile.open(fileName.c_str(), std::ios::out);
	myFile << "     #" << std::endl;
	myFile << "    ###" << std::endl;
	myFile << "   #####" << std::endl;
	myFile << "  #######" << std::endl;
	myFile << " #########" << std::endl;
	myFile << "     #" << std::endl;
	myFile << "     #" << std::endl;
	myFile << std::endl;
	myFile.close();
}
