/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 23:45:26 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/16 16:44:19 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
# define _EASYFIND_HPP_

# include <iostream>

class NotFound : public std::exception
{
	public:
		const char *what() const throw() {
			return("Not found");
		}
};

template<typename T>
int		easyfind(T const & p1, int const p2) {
	typename T::const_iterator it;
	typename T::const_iterator ite = p1.end();
	
	for(it = p1.begin(); it != ite; ++it) {
		if (*it == p2)
			return (*it);
	}
	throw NotFound();
}

#endif
