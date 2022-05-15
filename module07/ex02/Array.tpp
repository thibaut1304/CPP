/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:12:44 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/15 16:15:24 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _tab(new T[0]()), _size(0) {
} 

template<typename T>
Array<T>::Array(unsigned int n) : _tab(new T[n]()), _size(n) {
}

template<typename T>
Array<T>::Array(Array<T> const & src) : _tab(new T[src._size]()), _size(src._size) {
	unsigned int i = 0;
	for (i = 0; i < src._size; i++) {
		_tab[i] = src._tab[i];
	} 
}

template<typename T>
Array<T>::~Array() {
	delete[] _tab;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const & rhs) {
	if (_size > 0)
		delete[] _tab;
	if (rhs._size > 0) {
		_tab = new T[rhs._size]();
		for (unsigned int i = 0; i < rhs._size; i++) {
			_tab[i] = rhs._tab[i];
		}
	}
	_size = rhs._size;
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int const index) {
	if (index >= _size)
		throw Array::invalidIndex();
	return (_tab[index]);
}

template<typename T>
unsigned int		Array<T>::size(void) const {
	return (_size);
}