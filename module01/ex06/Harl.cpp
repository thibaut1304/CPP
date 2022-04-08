#include "Harl.hpp"

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\n"
	"I really do!\n" << std::endl;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
	"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n"
	"I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::another(void) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::complain( std::string level) {
	void	(Harl::*choice[5])(void);
	int i(0);
	choice[0] = &Harl::debug;
	choice[1] = &Harl::info;
	choice[2] = &Harl::warning;
	choice[3] = &Harl::error;
	choice[4] = &Harl::another;

	std::string choice_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4 ; i++)
		if (level == choice_level[i])
			break ;
	switch(i)
	{
		case 0:		(this->*choice[0])();
		case 1:		(this->*choice[1])();
		case 2:		(this->*choice[2])();
		case 3: 	(this->*choice[3])();
		default:	if (i <= 3)
						break ;
					(this->*choice[4])();
	}
}
