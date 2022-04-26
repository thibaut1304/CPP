/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:32:14 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 13:00:36 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const & src);
		Dog		&operator=(Dog const & rhs);
		~Dog(void);
		void	makeSound(void) const;
};

#endif
