/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:30:06 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/16 18:53:34 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
	try {
		Span test(10);
		for (int i = 0; i < 10; i++) {
			test.addNumber(i);
		}
		std::vector<unsigned int> oh(test.getVector());
		std::vector<unsigned int>::iterator = it;
		for(it = oh.begin(); it != oh.end(); it++) {
			std::cout << *it << std::endl;
		}
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}