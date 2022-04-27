/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:07:05 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 13:27:08 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "Constructor WrongAnimal called\n";
	this->_type = "Wrong Animal";
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Destructor WrongAnimal called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	*this = src;
	std::cout << "Copy constructor WrongAnimal called\n";
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & rhs) {
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	std::cout << "Assignament WrongAnimal called\n";
	return (*this);
}

void		WrongAnimal::makeSound(void) const {
	std::cout << "I have not a sound\n";
}

std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}
