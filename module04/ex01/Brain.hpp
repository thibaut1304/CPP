/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:47:50 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 14:12:25 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

# include <iostream>
# include <string>

class Brain {
	public:
		Brain();
		Brain(Brain const & src);
		Brain		&operator=(Brain const & rhs);
		~Brain();
	private:
		std::string ideas[100];
};
#endif
