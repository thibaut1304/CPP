/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:30:06 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/17 00:45:04 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


# define SIZE 6

int main(void) {
	int		tab[SIZE] = {6, 3, 17, 9, 11, -100};
	try {
		Span test(SIZE);
		// for (int i = 0; i < SIZE; i++) {
			// test.addNumber(tab[i]);
		// }
		test.multipleNumber(tab, SIZE);
		std::vector<int> oh = test.getVector();
		std::vector<int>::iterator it;
		for(it = oh.begin(); it != oh.end(); it++) {
			if (it == oh.begin())
				std::cout << _WHITE << *it << _NC;
			else
				std::cout << ", " << _WHITE << *it << _NC;
		}
		std::cout << std::endl;
		std::cout << _CYAN << "Resultat short : " << _GREEN << test.shortestSpan() << _NC << std::endl;
		std::cout << _CYAN << "Resultat long : " << _GREEN << test.longestSpan() << _NC << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}

