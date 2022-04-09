/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:00:21 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/09 18:10:57 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	this->_value = src.getRawBits();
}

Fixed::Fixed(int const nb) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = nb << this->_bits;
	std::cout << this->_value << std::endl;
}

Fixed::Fixed(float const nb) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(nb * (1 << this->_bits));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat( void ) const {
	float	result = (float)(this->_value) / (1 << this->_bits);
	return (result);
}

int		Fixed::toInt( void ) const {
	float	result = (int)(this->_value) / (1 << this->_bits);
	return (result);
}

std::ostream	&operator<<(std::ostream & o, Fixed const & i) {
	return (o << i.toFloat());
}
