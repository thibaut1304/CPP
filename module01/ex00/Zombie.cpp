/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:41:18 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 16:55:56 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {

}

Zombie::~Zombie() {
	std::cout << "Destructor called : " << this->_name << std::endl;
}

void	Zombie::announce() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
