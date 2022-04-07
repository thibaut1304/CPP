/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:50:38 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 19:15:12 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie*	newZombie( std::string name);

int	main( void )
{
	std::cout <<  "Zombie on the Heap" << std::endl;
	Zombie	*z = newZombie("Thibaut");
	z->announce();
	delete z;
	std::cout << "Zombie on the stack" << std::endl;
	randomChump("Alex");
	return (0);
}
