/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:26:27 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 23:48:06 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name): _type(name) {

}

Weapon::~Weapon() {

}

std::string Weapon::getType() const {
	return (this->_type);
}

void Weapon::setType(std::string type) {
	this->_type = type;
}
