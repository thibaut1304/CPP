/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:14:00 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/27 17:10:26 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Animal") {
	std::cout << "Constructor Animal called !" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src) {
	std::cout << "Constructor Copy Animal called !" << std::endl;
	*this = src;
}

AAnimal		&AAnimal::operator=(AAnimal const & rhs) {
	std::cout << "Constructor Assignement Animal called !" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return (*this);
}

AAnimal::~AAnimal(void) {
	std::cout << "Destructor Animal called" << std::endl;
}

std::string AAnimal::getType(void) const {
	return (this->_type);
}

// void	Animal::makeSound(void) const {
// 	std::cout << "I'm a Animal i do note have sound!" << std::endl;
// }

// void	Animal::add_ideas(std::string const) {

// }
// void	Animal::show_ideas( void ) const {

// }
