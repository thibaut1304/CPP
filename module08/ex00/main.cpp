/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 23:21:57 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/16 16:48:31 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <map>
#include <cstdlib>

#define _NC "\033[0;0m"
#define _RED "\033[0;31m"
#define _GREEN "\033[0;32m"
#define _YELLOW "\033[0;33m"
#define _BLUE "\033[0;34m"
#define _PURPLE "\033[0;95m"
#define _CYAN "\033[0;36m"
#define _WHITE "\033[0;37m"

# define SIZE 10

template<typename T>
void	random_nb(T &container) {
	typename T::iterator it;
	int nb = rand() % SIZE;
	int i = 0;
	
	for (it = container.begin(); it != container.end(); ++it) {
		if (i == nb)
			*it = 42;
		else
			*it = rand() % 100 + 1;
		i++;
	}
}

template<typename T>
void	print_nb(T & container, std::string name) {
	typename T::iterator it;
	std::cout << name;
	for ( it = container.begin(); it != container.end(); it++) {
		if (it == container.begin())
			std::cout << _WHITE << *it << _NC;
		else
			std::cout << ", " << _WHITE  << *it << _NC;
	}
	std::cout << std::endl;
}

void	vectors() {
	std::vector<int> vectors(SIZE);
	
	random_nb(vectors);
	print_nb(vectors, "Vector = ");

	try {
		std::cout << "Search number 42 in vector ! ";
		bool find = easyfind(vectors, 42);
		if (find)
			std::cout << _GREEN << "FIND !" <<  _NC << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _RED << e.what() << _NC << std::endl;
	}
	try {
		std::cout << "Search number -42 in vector ! ";
		bool find = easyfind(vectors, -42);
		if (find)
			std::cout << _GREEN << "FIND !" <<  _NC << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _RED << e.what() << _NC << std::endl;
	}
	
}

void	list() {
	std::list<int> list1(SIZE);
	
	random_nb(list1);
	print_nb(list1, "List = ");
	
	try {
		std::cout << "Search number 42 in list ! ";
		bool find = easyfind(list1, 42);
		if (find)
			std::cout << _GREEN << "FIND !" <<  _NC << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _RED << e.what() << _NC << std::endl;
	}
	try {
		std::cout << "Search number -42 in list ! ";
		bool find = easyfind(list1, -42);
		if (find)
			std::cout << _GREEN << "FIND !" <<  _NC << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _RED << e.what() << _NC << std::endl;
	}
}

int main() {
	srand(time(0));
	vectors();
	list();
	return (0);
}
