/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 23:21:57 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/16 00:27:54 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

#define _NC "\033[0;0m"
#define _RED "\033[0;31m"
#define _GREEN "\033[0;32m"
#define _YELLOW "\033[0;33m"
#define _BLUE "\033[0;34m"
#define _PURPLE "\033[0;95m"
#define _CYAN "\033[0;36m"
#define _WHITE "\033[0;37m"

# define SIZE 10

template <typename T>
void							 aleat(T &container)
{
	typename T::iterator			it;
	int good = rand() % SIZE;
	int i = 0;

	std::cout << "(";
	for(it = container.begin(); it != container.end(); ++it){
		if (i++ == good)
			*it = 42;
		else
			*it = rand() % SIZE;
		if (it == container.begin())
			std::cout << *it;
		else
			std::cout <<", " << *it;
	}
	std::cout << ")" << std::endl;
}

int main() {
	srand(time(0));
	std::vector<int> vectors(SIZE);

	std::cout << "Vector = ";
	aleat(vectors);

	try {
		std::cout << "Search number 42 in vector ! ";
		bool find = easyfind(vectors, 42);
		if (find) std::cout << _GREEN << "FIND !" <<  _NC << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _RED << e.what() << _NC << std::endl;
	}
	try {
		std::cout << "Search number -42 in vector ! ";
		bool find = easyfind(vectors, -42);
		if (find) std::cout << _GREEN << "FIND !" <<  _NC << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _RED << e.what() << _NC << std::endl;
	}
	return (0);
}
