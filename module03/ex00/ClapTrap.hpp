/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:17:49 by root              #+#    #+#             */
/*   Updated: 2022/04/13 16:25:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <iostream>
# include <string>

class ClapTrap {

	public:
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const & src);
		ClapTrap &operator=(ClapTrap const & rhs);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName(void) const;
		int getHits(void) const;
		int getEnergyPoint(void) const;
		int getAttackDommage(void) const;

	protected:
		std::string _name;
		int			_hits;
		int			_energyPoint;
		int			_attackDammage;
};

#endif