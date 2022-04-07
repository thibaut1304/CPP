/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:39:02 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 23:50:40 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	std::cout << this->_name << " no weapon !" << std::endl;
}

HumanB::~HumanB() {
}

void	HumanB::attack() const {
	std::cout << this->_name << " attack with : " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	std::cout << this->_name << " take a : " << this->_weapon->getType() << std::endl;
}

