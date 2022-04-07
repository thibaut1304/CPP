/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:12:04 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 23:48:55 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include "Weapon.hpp"

class HumanB {

	public:

	HumanB(std::string const name);
	~HumanB();
	void	attack() const;
	void	setWeapon(Weapon &weapon);

	private:

	std::string	_name;
	Weapon		*_weapon;
};

#endif
