/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:22:18 by root              #+#    #+#             */
/*   Updated: 2022/04/17 11:45:58 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//////////////////////////////////////
//		Initialisation 				//
//////////////////////////////////////

ClapTrap::ClapTrap(std::string name) : _name(name), _hits(10), _energyPoint(10), _attackDammage(0) {
	std::cout << "Conscructor ClapTrap called with name : " << name << " !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "Copy constructor called !" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "Assignement ClapTrap copy called !" << std::endl;
	if (this != &rhs)
	{
		this->_attackDammage = rhs._attackDammage;
		this->_energyPoint = rhs._energyPoint;
		this->_name = rhs._name;
		this->_hits = rhs._hits;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap called with name : " << this->_name << " !" << std::endl;
}

//////////////////////////////////////
//			Accessors				//
//////////////////////////////////////

std::string ClapTrap::getName(void) const {
	return (this->_name);
}

int			ClapTrap::getHits(void) const {
	return (this->_hits);
}

int			ClapTrap::getAttackDommage(void) const {
	return (this->_attackDammage);
}

int			ClapTrap::getEnergyPoint(void) const {
	return (this->_energyPoint);
}

//////////////////////////////////////

void	ClapTrap::attack(const std::string & target) {
	if (this->_energyPoint > 0 && this->_hits > 0) {
		this->_energyPoint -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDammage << " points of domage !" << std::endl;
	}
	else if (this->_energyPoint == 0){
		std::cout << "ClapTrap " << this->_name << " does not have enough energy !" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " does not have enough hits !" << std::endl;


}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hits > 0) {
		this->_hits -= amount;
		if (this->_hits < 0)
			this->_hits = 0;
		std::cout << "ClapTrap " << this->_name << " take " << amount << " damage !" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is dead !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoint > 0) {
		this->_energyPoint -= 1;
		this->_hits += amount;
		std::cout << "ClapTrap " << this->_name << " recovers " << amount << " points !" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " does not have enough energy !" << std::endl;
}
