/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:19:03 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/19 21:54:55 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {
	this->_hits = 100;
	this->_energyPoint = 50;
	this->_attackDammage = 20;
	std::cout << "Conscructor Scavtrap called with name : " << name << " !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & hey) {
	*this = hey;
	std::cout << "Copy constructor called !" << std::endl;
}


ScavTrap	&ScavTrap::operator=(ScavTrap const & rhs) {
	std::cout << "Assignement Scavtrap copy called !" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hits = rhs._hits;
		this->_energyPoint = rhs._energyPoint;
		this->_attackDammage = rhs._attackDammage;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor Scavtrap called with name : " << this->_name << " !" << std::endl;
}

void	ScavTrap::attack(const std::string & target) {
	if (this->_energyPoint > 0 && this->_hits > 0) {
		this->_energyPoint -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDammage << " points of domage !" << std::endl;
	}
	else if (this->_energyPoint == 0){
		std::cout << "ScavTrap " << this->_name << " does not have enough energy !" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " does not have enough hits !" << std::endl;
}

void 		ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " in Gate keeper mode !" << std::endl;
}

