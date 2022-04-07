/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:05:58 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 19:11:43 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name);

int	main()
{
	int nb_zombie(5);

	std::cout << "Horde of Zombies!" << std::endl;
	Zombie *new_zombie = zombieHorde(nb_zombie, "Thibaut");
	for (int i(0); i < nb_zombie ; i++)
		new_zombie[i].announce();
	delete [] new_zombie;
	return (0);
}
