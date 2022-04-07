/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:04:12 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 23:27:30 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <iostream>

class Weapon {

	public:

	Weapon(std::string);
	~Weapon();
	std::string getType(void) const;
	void		setType(std::string);

	private:

	std::string _type;
};

#endif
