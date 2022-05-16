/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:11:59 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/16 18:38:54 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N) {}

Span::Span(Span const & src) {
	std::vector<unsigned int>::iterator it;
	unsigned int i = 0;
	for (it = src._N.begin(); it != src._N.end(); it++) {
		i++;
		if (i >= _size)
			throw newElementadded();
		this->_N.push_back(*it);
	}
}

Span	&Span::operator=(Span const & rhs) {
	std::vector<unsigned int>::iterator it;
	unsigned int i = 0;
	for (it = rhs._N.begin(); it != rhs._N.end(); it++) {
		i++;
		if (i >= _size)
			throw newElementadded();
		this->_N.push_back(*it);
	}
}

Span::~Span() {}

const char *Span::newElementadded::what() const throw() {
	return ("Error add number");
}

void	Span::addNumber(int nb) {
	unsigned int i = 0;
	 std::vector<unsigned int>::iterator it;
	for (it = _N.begin(); it != _N.end(); it ++) {
		i++;
	}
	if (i >= _size)
		throw newElementadded();
	_N.push_back(nb);
}