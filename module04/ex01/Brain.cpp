/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:49:36 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 13:52:29 by thhusser         ###   ########.fr       */
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

	}
	std::cout << "Assignament Brain called\n";
	return (*this);
}

Brain::~Brain(void) {
		std::cout << "Destructor Brain called\n";
}
