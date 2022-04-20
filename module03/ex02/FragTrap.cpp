/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:59:20 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/19 22:02:09 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const name) : ClapTrap(name) {
	this->_hits = 100;
	this->_energyPoint = 100;
	this->_attackDammage = 30;
	std::cout << "Conscructor FragTrap called with name : " << name << " !" << std::endl;
}

FragTrap::FragTrap(FragTrap const & hey) {
	*this = hey;
	std::cout << "Copy constructor called !" << std::endl;
}


FragTrap	&FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "Assignement FragTrap copy called !" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hits = rhs._hits;
		this->_energyPoint = rhs._energyPoint;
		this->_attackDammage = rhs._attackDammage;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap called with name : " << this->_name << " !" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << ", high fives guys !" << std::endl;
}
