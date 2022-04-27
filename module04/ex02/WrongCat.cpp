/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:15:09 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 13:20:34 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "Constructor WrongCat called\n";
	this->_type = "Wrong Cat";
}

WrongCat::WrongCat(WrongCat const & src) {
	*this = src;
	std::cout << "Copy constructor WrongCat called\n";
}

WrongCat	&WrongCat::operator=(WrongCat const & rhs) {
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	std::cout << "Assignament WrongCat called\n";
	return (*this);

}

WrongCat::~WrongCat(void) {
	std::cout << "Destructor WrongCat called\n";
}

void	WrongCat::makeSound(void) const {
	std::cout << "Wrong Miaou !\n";
}
