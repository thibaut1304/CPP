/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:02:09 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 19:13:16 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void) {

}

Zombie::Zombie (std::string name) : _name(name) {

}

Zombie::~Zombie() {
	std::cout << "Destructor called : " << this->_name << std::endl;
}

void	Zombie::setName( std::string name) {
	this->_name = name;
}

void	Zombie::announce() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

