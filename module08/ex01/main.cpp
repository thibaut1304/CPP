/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:30:06 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/17 18:06:14 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


# define SIZE 100
# define SIZE_2 10

void	print_vector(Span const & test) {
	std::vector<int> oh = test.getVector();
	std::vector<int>::iterator it;
	
	for(it = oh.begin(); it != oh.end(); it++) {
		if (it == oh.begin())
			std::cout << _WHITE << *it << _NC;
		else
			std::cout << ", " << _WHITE << *it << _NC;
	}
	std::cout << std::endl;
}

void	main_subject() {
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << _CYAN << "Main_subject : " << _NC;
	print_vector(sp);
	std::cout << _CYAN << "Resultat short : " << _GREEN << sp.shortestSpan() << _NC << std::endl;
	std::cout << _CYAN << "Resultat long : " << _GREEN << sp.longestSpan() << _NC << std::endl;
}

void	randomNoDoublon () {
	int 	tab[SIZE_2];
	int 	ret[SIZE];
	Span	sp(SIZE_2);
	
	for (int i = 0; i < SIZE_2 ; i++) {
		ret[i] = 0;
		tab[i] = 0;
	}
	for (int i = 0; i < SIZE_2; i++) {
		while (tab[i] == 0) {
			int tmp = rand() % SIZE;
			if (ret[tmp] == 0) {
				tab[i] = tmp;
				ret[tab[i]] = 1;
			}
		}
	}
	sp.multipleNumber(tab, SIZE_2);
	std::cout << _CYAN << "Random 10 numbers no duplicate : " << _NC;
	print_vector(sp);
	std::cout << _CYAN << "Resultat short : " << _GREEN << sp.shortestSpan() << _NC << std::endl;
	std::cout << _CYAN << "Resultat long : " << _GREEN << sp.longestSpan() << _NC << std::endl;
}

int main(void) {
	srand(time(0));
	main_subject();
	randomNoDoublon();
	int		tab[SIZE];
	for (int i = 0; i < SIZE; i++) {
		tab[i] = rand() % 100;
	}
	try {
		Span test(SIZE);
		// for (int i = 0; i < SIZE; i++) {
			// test.addNumber(tab[i]);
		// }
		test.multipleNumber(tab, SIZE);
		std::cout << _CYAN << "Random 100 numbers possible duplicate : " << _NC;
		print_vector(test);
		std::cout << _CYAN << "Resultat short : " << _GREEN << test.shortestSpan() << _NC << std::endl;
		std::cout << _CYAN << "Resultat long : " << _GREEN << test.longestSpan() << _NC << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << _CYAN << "Test add 2 numbers with size 1 -> return exception" << _NC << std::endl;
	try {
		Span sp(1);

		sp.addNumber(5);
		sp.addNumber(42);
	}
	catch (std::exception & e) {
			std::cout << _RED << e.what() << _NC << std::endl;
	}
	std::cout << _CYAN << "Test with size 1 -> return exception for long and short" << _NC << std::endl;
	try {
		Span sp = Span(1);

		sp.addNumber(10);
		try {
			std::cout << _CYAN << "Resultat long : " << _GREEN << sp.longestSpan() << _NC << std::endl;
		}
		catch (std::exception & e) {
			std::cout << _RED << e.what() << _NC << std::endl;
		}
		std::cout << _CYAN << "Resultat short : " << _GREEN << sp.shortestSpan() << _NC << std::endl;
	}
	catch (std::exception & e) {
		std::cout << _RED << e.what() <<  _NC << std::endl;
	}
	return (0);
}

