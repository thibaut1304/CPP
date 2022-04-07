/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:37:31 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 19:13:19 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP
# define _ZOMBIE_HPP

# include <iostream>

class Zombie {

	public:

	Zombie(void);
	Zombie(std::string);
	~Zombie(void);

	void	setName( std::string name);
	void	announce(void) const;

	private:

	std::string	_name;
};

#endif
