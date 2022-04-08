/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:38:23 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/08 21:51:10 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main(int argc, char **argv)
{
	Harl harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cout << "Bad arguments !" << std::endl;
	return (0);
}
