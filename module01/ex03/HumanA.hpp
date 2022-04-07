/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:12:04 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 23:25:05 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

# include "Weapon.hpp"

class HumanA {

	public:

	HumanA(std::string const name, Weapon &weapon);
	~HumanA();
	void	attack() const;

	private:

	std::string _name;
	Weapon		&_weapon;
};

#endif
