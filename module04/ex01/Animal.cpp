/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:14:00 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 13:02:57 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
	std::cout << "Constructor Animal called !" << std::endl;
}

Animal::Animal(Animal const & src) {
	std::cout << "Constructor Copy Animal called !" << std::endl;
	*this = src;
}

Animal		&Animal::operator=(Animal const & rhs) {
	std::cout << "Constructor Assignement Animal called !" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Destructor Animal called" << std::endl;
}

std::string Animal::getType(void) const {
	return (this->_type);
}

void	Animal::makeSound(void) const {
	std::cout << "I'm a Animal i do note have sound!" << std::endl;
}
