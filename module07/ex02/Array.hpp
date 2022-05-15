/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:24:27 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/15 16:18:18 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_

# include <iostream>
# include <string>

template<typename T>
class Array {
	private:
		T *_tab;
		unsigned int _size;
	public:
		Array();	
		Array(unsigned int n);
		Array(Array<T> const & src);
		Array<T> 	&operator=(Array<T> const & rhs);
		~Array();

		class invalidIndex : public std::exception {
			char const *what() const throw() {return ("Invalid index in array\n");}
		};
		T	&operator[](unsigned int const index);
		unsigned int		size(void) const;
		
};

# include "Array.tpp"

#endif