/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:58:18 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/15 14:08:54 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
# define _ITER_HPP_

# include <iostream>
# include <string>

template<typename T>
void	f(T const & value) {
	std::cout << value;
}

template<typename T>
void	iter(T *array, size_t size, void(*f)(T const & value)) {
	for(size_t i = 0; i < size; i++) {
		f(array[i]);
	}
	std::cout << std::endl;
}

#endif