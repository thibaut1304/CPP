/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:47:50 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/27 15:06:37 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

# include <iostream>
# include <string>

# define TOTAL_IDEAS 100

class Brain {
	public:
		Brain();
		Brain(Brain const & src);
		Brain		&operator=(Brain const & rhs);
		void		add(int index, std::string name);
		void		show(unsigned const index) const;
		~Brain();				// a voir si passer en virtual !
	private:
		std::string _ideas[TOTAL_IDEAS];
};
#endif
