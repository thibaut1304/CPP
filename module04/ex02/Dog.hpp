/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:32:14 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/27 17:10:56 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	public:
		Dog(void);
		Dog(Dog const & src);
		Dog				&operator=(Dog const & rhs);
		~Dog(void);
		void			show_ideas( void ) const;
		void			makeSound(void) const;
		void			add_ideas(std::string const);
	private:
		Brain			*_brain;
};

#endif
