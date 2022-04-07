/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:59:20 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 19:10:00 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {
	Zombie* new_zombie = new Zombie[N];
	for (int i(0); i < N; i++)
		new_zombie[i].setName(name);
	return (new_zombie);
}
