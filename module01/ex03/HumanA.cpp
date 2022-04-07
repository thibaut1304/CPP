/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:20:56 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 23:37:12 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon &weapon) : _name(name), _weapon(weapon) {
	std::cout << this->_name << " take a : " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA() {

}

void	HumanA::attack() const {
	std::cout << this->_name << " attack with : " << this->_weapon.getType() << std::endl;
}
