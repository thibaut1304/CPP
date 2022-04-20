/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:13:54 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/19 21:50:48 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:

		ScavTrap(std::string const name = "Default_ScavTrap");
		ScavTrap(ScavTrap const & hey);
		ScavTrap	&operator=(ScavTrap const & rhs);
		~ScavTrap();
		void 		attack(const std::string& target);
		void 		guardGate();
};

#endif
