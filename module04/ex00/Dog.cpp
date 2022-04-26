/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:34:20 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 13:01:53 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Constructor Dog called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const & src) {
	*this = src;
	std::cout << "Copy constructor Dog called\n";
}

Dog		&Dog::operator=(Dog const & rhs) {
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	std::cout << "Assignement Dog called\n";
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Destructor Dog called\n";
}

void	Dog::makeSound(void) const {
	std::cout << "Whaouf !!" << std::endl;
}
