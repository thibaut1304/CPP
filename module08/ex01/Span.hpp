/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:56:30 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/17 10:27:46 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_

# include <iostream>
# include <vector>
# include <algorithm>

#define _NC "\033[0;0m"
#define _RED "\033[0;31m"
#define _GREEN "\e[32m"
#define _YELLOW "\033[0;33m"
#define _BLUE "\033[0;34m"
#define _PURPLE "\033[0;95m"
#define _CYAN "\e[36m"
#define _WHITE "\e[37m"

class Span {
	public:
		Span();
		Span(unsigned int N);
		Span(Span const & src);
		Span	&operator=(Span const & rhs);
		~Span();
		class	newElementadded : public std::exception {
			const char *what() const throw();
		};
		class	noOrOneNumber : public std::exception {
			const char	*what() const throw();
		};
		class noMemory : public std::exception {
			const char 	*what() const throw();
		};

		void	addNumber(int);
		void	multipleNumber(int*, int);
		int		shortestSpan();
		int		longestSpan();
		std::vector<int>		getVector(void) const;

	private:
		std::vector<int> 	_N;
		unsigned int 				_size;
};

#endif
