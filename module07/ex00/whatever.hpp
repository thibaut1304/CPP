/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:41:29 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/15 13:49:50 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TEMPLATE_HPP_
# define _TEMPLATE_HPP_

#include <iostream>

template<typename T>
void	swap(T & a, T & b) {
	T c = a;

	a = b;
	b = c;
}

template<typename T>
T	max(T const & a, T const & b) {
	return (b >= a ? b : a);
}

template<typename T>
T	min(T const & a, T const & b) {
	return ( b <= a ? b : a);
}

#endif