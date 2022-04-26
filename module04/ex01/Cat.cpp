/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:27:26 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 14:18:35 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Constructor Cat called !" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & src) {
	std::cout << "Copie constructor Cat called !" << std::endl;
	*this = src;
}

Cat	&Cat::operator=(Cat const & rhs) {
	std::cout << "Assignement constructor Cat called !" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this)
;}

Cat::~Cat() {
	std::cout << "Destructor Cat called !" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const {
	std::cout << "MIAOU !!" << std::endl;
}
