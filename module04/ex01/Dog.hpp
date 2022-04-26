/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:32:14 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 14:12:31 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const & src);
		Dog		&operator=(Dog const & rhs); // checker l'assignation pointeur free l'ancien !
		~Dog(void);
		void	makeSound(void) const;
	private:
		Brain			*_brain;
};

#endif
