/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:08:33 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/08 20:44:00 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level) {
	void	(Harl::*choice[4])(void);
	int i(0);
	choice[0] = &Harl::debug;
	choice[1] = &Harl::info;
	choice[2] = &Harl::warning;
	choice[3] = &Harl::error;

	std::string choice_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4 ; i++)
		if (level == choice_level[i])
			break ;
	(this->*choice[i])();
}
