/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:34:20 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/27 15:28:55 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Constructor Dog called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & src) {
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
	std::cout << "Copy constructor Dog called\n";
}

Dog		&Dog::operator=(Dog const & rhs) {
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_nbIdeas = rhs._nbIdeas;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	std::cout << "Assignement Dog called\n";
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Destructor Dog called\n";
	delete this->_brain;
}

void	Dog::makeSound(void) const {
	std::cout << "Whaouf !!" << std::endl;
}

void	Dog::show_ideas( void ) const {
	this->_brain->show(this->_nbIdeas);
}

void	Dog::add_ideas(std::string const ideas) {
	std::cout << "We add the idea '" << ideas << "' in position " << this->_nbIdeas << " ... ";
	this->_brain->add(this->_nbIdeas, ideas);
	this->_nbIdeas++;
	if (_nbIdeas >= 100)
		this->_nbIdeas = 99;
}
