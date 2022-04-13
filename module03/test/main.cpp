/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:36:15 by root              #+#    #+#             */
/*   Updated: 2022/04/11 16:12:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
	Cat unchat("Felix");
	unchat.setLegs(4);

	std::cout << "Nombre de pattes du chat 	: " << unchat.getLegs() << std::endl;;
	std::cout << "Nom du chat 			: " << unchat.getCall() << std::endl;;
	return (0);
}