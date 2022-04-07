/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:45:11 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 20:21:36 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "The memory address of the string brain : " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR   : " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF   : " << &stringREF << std::endl;

	std::cout << "The value of the string brain          : " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR      : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF      : " << stringREF << std::endl;

	return (0);
}
