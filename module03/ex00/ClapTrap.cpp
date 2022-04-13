/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:22:18 by root              #+#    #+#             */
/*   Updated: 2022/04/11 16:34:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "Conscructor ClapTrap called with name :" << name << " !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "Assignement ClapTrap copy called :" << std::endl;
	if (*this != &rhs)
	{
		this->_attackDammage = rhs._attackDammage;
		this->_energyPoint = rhs.getEnergyPoint();
		this->_name = rhs.getName();
		this->_hits = rhs.getHits();
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap called with name :" << this->_name << " !" << std::endl;
}

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