/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:11:59 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/17 10:33:55 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int N) : _size(N) {}

Span::Span(Span const & src) {
	std::vector<int>::iterator it;
	unsigned int i = 0;
	_size = src._size;
	for (it = src.getVector().begin(); it != src._N.end(); it++) {
		i++;
		if (i >= _size)
			throw newElementadded();
		this->_N.push_back(*it);
	}
}

Span	&Span::operator=(Span const & rhs) {
	std::vector<int>::iterator it;
	unsigned int i = 0;
	_size = rhs._size;
	for (it = rhs.getVector().begin(); it != rhs._N.end(); it++) {
		i++;
		if (i >= _size)
			throw newElementadded();
		this->_N.push_back(*it);
	}
	return (*this);
}

Span::~Span() {}

const char	*Span::newElementadded::what() const throw() {
	return ("Error add number");
}

const char	*Span::noOrOneNumber::what() const throw() {
	return ("No distance can found");
}

const char	*Span::noMemory::what() const throw() {
    return "Not enough memory";
}

std::vector<int>		Span::getVector(void) const {
	return(this->_N);
}

int		Span::shortestSpan() {
	if (_N.size() <= 1)
		throw noOrOneNumber();
	std::vector<int> copie = _N;
	std::sort(copie.begin(), copie.end()); // trie du plus grand au plus petit !
	std::vector<int>::iterator it;
	unsigned int size_copie = copie.size();
	int ret = copie[1] - copie[0];

	for (unsigned int i = 0; i < size_copie - 1; i++) {
		if ((copie [i + 1] - copie[i]) < ret)
			ret = copie [i + 1] - copie[i];
	}
	return (ret);
}

int		Span::longestSpan() {
	if (_N.size() <= 1)
		throw noOrOneNumber();
	std::vector<int>::iterator max = std::max_element(_N.begin(), _N.end());
	std::vector<int>::iterator min = std::min_element(_N.begin(), _N.end());

	return (*max - *min);
}


void	Span::addNumber(int nb) {
	unsigned int i = 0;
	 std::vector<int>::iterator it;
	for (it = _N.begin(); it != _N.end(); it ++) {
		i++;
	}
	if (i >= _size)
		throw newElementadded();
	_N.push_back(nb);
}

// int myarray [] = { 501,502,503 };
//   myvector.insert (myvector.begin(), myarray, myarray+3);

void	Span::multipleNumber(int *nb, int size) {
	if (_N.size() + static_cast<unsigned int>(size) > _size)
		throw noMemory();

	_N.insert(_N.begin(), nb, nb + size);
}
