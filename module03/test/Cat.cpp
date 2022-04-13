/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:43:45 by root              #+#    #+#             */
/*   Updated: 2022/04/11 16:07:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat() {
	std::cout << "Constructor Cat called !" << std::endl; 
}

Cat::Cat(std::string const value) : _name(value) {
	std::cout << "Constructor Cat called and assignement call!" << std::endl; 
}

Cat::Cat(Cat const & src) {
	std::cout << "Constructor Cat copy called !" << std::endl; 
	*this = src;
}

Cat::~Cat() {
	std::cout << "Destructeur cat called !" << std::endl; 
}

std::string Cat::getCall(void) const {
	return (this->_name);
}

void		Cat::setCall(std::string const & call) {
	this->_name = call;
}

Cat	&Cat::operator=(Cat const & rhs) {
	std::cout << "Assignement Cat !" << std::endl; 
	if (this != &rhs)
		this->_name = rhs.getCall();
	return (*this);
}
