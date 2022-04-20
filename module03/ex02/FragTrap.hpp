/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:13:54 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/19 21:58:55 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:

		FragTrap(std::string const name = "Default_FragTrap");
		FragTrap(FragTrap const & hey);
		FragTrap	&operator=(FragTrap const & rhs);
		~FragTrap();
		void 		highFivesGuys(void);
};

#endif
