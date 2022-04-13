/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:27:13 by root              #+#    #+#             */
/*   Updated: 2022/04/11 16:11:48 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Constructor animal called !" << std::endl; 
}

Animal::Animal(int const nb) : _numberLegs(nb) {
	std::cout << "Constructor animal called and assignement legs!" << std::endl; 
}

Animal::Animal(Animal const & src) {
	std::cout << "Constructor animal copy called !" << std::endl; 
	*this = src;
}

Animal::~Animal() {
	std::cout << "Destructeur animal called !" << std::endl; 
}

int		Animal::getLegs(void) const {
	return (this->_numberLegs);
}

void	Animal::setLegs(int const legs) {
	this->_numberLegs = legs;
}


Animal	&Animal::operator=(Animal const & rhs) {
	std::cout << "Assignement Annimal !" << std::endl; 
	if (this != &rhs)
		this->_numberLegs = rhs.getLegs();
	return (*this);
}

