/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:27:26 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 13:01:42 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Constructor Cat called !" << std::endl;
	this->_type = "Cat";
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
	}
	return (*this)
;}

Cat::~Cat() {
	std::cout << "Destructor Cat called !" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "MIAOU !!" << std::endl;
}
