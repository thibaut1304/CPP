/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 11:36:14 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/19 22:04:02 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void)
{
	ClapTrap player1("Thibaut"), player2("Marie");

	player1.attack("Marie");
	player2.takeDamage(2);

	player1.attack("Marie");
	player2.takeDamage(2);

	player1.attack("Marie");
	player2.takeDamage(2);

	player1.attack("Marie");
	player2.takeDamage(2);

	player2.beRepaired(1);

	player1.attack("Marie");
	player2.takeDamage(2);

	player1.attack("Marie");
	player2.takeDamage(3);
	player2.takeDamage(1);

	ClapTrap player3("test");

	ClapTrap player4 = player3;

	std::cout << "----------------------------------------------------------------\n" << std::endl;

	ScavTrap player5("Scavtrap_5");

	player5.attack("Marie");
	player5.guardGate();

	ScavTrap player6 = player5;

	std::cout << "----------------------------------------------------------------\n" << std::endl;

	FragTrap A("Alpha");
	ScavTrap B("Beta");

	A.attack("Beta");
	B.takeDamage(30);

	B.attack("Alpha");
	A.takeDamage(20);
	A.beRepaired(15);

	B.guardGate();

	B.beRepaired(10);

	A.highFivesGuys();

	return (0);
}
