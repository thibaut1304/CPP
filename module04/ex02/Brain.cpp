/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:49:36 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/27 15:14:04 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Constructor Brain called\n";
}

Brain::Brain(Brain const & src) {
	*this = src;
	std::cout << "Constructor copy Brain called\n";
}

Brain	&Brain::operator=(Brain const & rhs) {
	if (this != &rhs)
	{
		for (int i = 0; i < TOTAL_IDEAS; i++) {
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	std::cout << "Assignament Brain called\n";
	return (*this);
}

Brain::~Brain(void) {
		std::cout << "Destructor Brain called\n";
}

void	Brain::add(int index, std::string const name) {
	if (index >= TOTAL_IDEAS)
		index = TOTAL_IDEAS - 1;
	this->_ideas[index] = name;
	std::cout << "Ideas is set !\n";
}

void	Brain::show(unsigned const index) const {
	for (unsigned int i = 0; i < index; i++)
		std::cout << "Ideas # " << i << " : " << this->_ideas[i] << "(" << &_ideas[i]<< ")"<<std::endl;
}
