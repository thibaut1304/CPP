/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:05:45 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/14 19:40:57 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		main(int argc, char **argv) {
	std::string str;
	if (argc != 2) {
		std::cout << "Errors bad arguments please enter a char or int or float and double" << std::endl;
		return (0);
	}
	str = argv[1];
	try {
		Convert	test(str);
		test.toPrint();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
