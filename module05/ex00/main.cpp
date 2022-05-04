/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:42:44 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/03 16:59:37 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat nb_1("Thibaut", 10);
	Bureaucrat nb_2 = nb_1;
	Bureaucrat nb_3("Gab", 150);
	Bureaucrat nb_4("Alice", 0);
	
	std::cout << nb_1;
	std::cout << nb_2;
	std::cout << nb_3;
	std::cout << nb_4;
	return (0);
}