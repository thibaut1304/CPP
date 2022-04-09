/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:00:21 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/09 22:09:50 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//////////////////////////////////////////
//	Constructor and Destructor and copy	//
//////////////////////////////////////////

Fixed::Fixed(void) : _value(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const nb) {
	// std::cout << "Int constructor called" << std::endl;
	this->_value = nb << this->_bits;
}

Fixed::Fixed(float const nb) {
	// std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(nb * (1 << this->_bits));
}

Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const & rhs) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

//////////////////////////////////////////

std::ostream	&operator<<(std::ostream & o, Fixed const & i) {
	return (o << i.toFloat());
}

//////////////////////////////////////////
//		Set and get Raw bits			//
//////////////////////////////////////////

int		Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

//////////////////////////////////////////
//		To int and float				//
//////////////////////////////////////////

float	Fixed::toFloat( void ) const {
	float	result = (float)(this->_value) / (1 << this->_bits);
	return (result);
}

int		Fixed::toInt( void ) const {
	float	result = (int)(this->_value) / (1 << this->_bits);
	return (result);
}

//////////////////////////////////////////
//			Min and max					//
//////////////////////////////////////////

Fixed const	&Fixed::min(Fixed const &nb1, Fixed const &nb2) {
	if (nb1._value > nb2._value)
		return (nb2);
	return (nb1);
}

Fixed const	&Fixed::max(Fixed const &nb1, Fixed const &nb2) {
	if (nb1._value < nb2._value)
		return (nb2);
	return (nb1);
}

Fixed	&Fixed::min(Fixed &nb1, Fixed &nb2) {
	if (nb1._value > nb2._value)
		return (nb2);
	return (nb1);
}

Fixed	&Fixed::max(Fixed &nb1, Fixed &nb2) {
	if (nb1._value < nb2._value)
		return (nb2);
	return (nb1);
}


//////////////////////////////////////////
//		comparison operator				//
//////////////////////////////////////////

bool	Fixed::operator>( Fixed const & rhs) {
	return (this->_value > rhs._value);
}

bool	Fixed::operator<( Fixed const & rhs) {
	return (this->_value < rhs._value);
}

bool	Fixed::operator>=( Fixed const & rhs) {
	return (this->_value >= rhs._value);
}

bool	Fixed::operator<=( Fixed const & rhs) {
	return (this->_value <= rhs._value);
}

bool	Fixed::operator==( Fixed const & rhs) {
	return (this->_value == rhs._value);
}

bool	Fixed::operator!=( Fixed const & rhs) {
	return (!(this->_value == rhs._value));
}

//////////////////////////////////////////
//		arithmetic operators			//
//////////////////////////////////////////
//Faux!

Fixed	Fixed::operator+( Fixed const & rhs) {
	Fixed dst;

	dst.setRawBits(this->_value + rhs.getRawBits());
	return (dst);
}

Fixed	Fixed::operator*( Fixed const & rhs) {
	Fixed dst;

	dst.setRawBits((this->_value * rhs.getRawBits()) >> this->_bits);
	return (dst);
}

Fixed	Fixed::operator-( Fixed const & rhs) {
	Fixed dst;

	dst.setRawBits(this->_value - rhs.getRawBits());
	return (dst);
}

Fixed	Fixed::operator/( Fixed const & rhs) {
	Fixed dst;

	dst.setRawBits((this->_value << this->_bits/ rhs.getRawBits()));
	return (dst);
}

//////////////////////////////////////////
//	increment and decrement operators	//
//////////////////////////////////////////

Fixed	Fixed::operator++(int) { //prefix
	Fixed copy = *this;

	this->operator++();
	return (copy);
}

Fixed	Fixed::operator--(int) { //prefix
	Fixed copy = *this;

	this->operator--();
	return (copy);
}

Fixed	&Fixed::operator++(void) { //postfix

	this->_value++;
	return (*this);
}

Fixed	&Fixed::operator--(void) { //postfix
	this->_value--;
	return (*this);
}
