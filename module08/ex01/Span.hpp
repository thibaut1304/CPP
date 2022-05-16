/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:56:30 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/16 18:20:33 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_

# include <iostream>
# include <vector>

class Span {
	public:
		Span(unsigned int N);
		Span(Span const & src);
		Span	&operator=(Span const & rhs);
		~Span();
		class newElementadded : public std::exception {
			const char *what() const throw();
		};
		void	addNumber(int);

	private:
		Span();
		std::vector<unsigned int> 	_N;
		unsigned int 				_size;
};

#endif