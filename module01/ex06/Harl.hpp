/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:31:02 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/08 21:51:11 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_HPP_
# define _HARL_HPP_

# include <iostream>

class Harl {

	public:

	void	complain( std::string level);

	private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	another(void);

};

#endif
