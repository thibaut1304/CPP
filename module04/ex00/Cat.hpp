/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:07:49 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 13:30:17 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

# include "Animal.hpp"

class Cat : public Animal {
	public:
	Cat();
	Cat(Cat const &src);
	Cat				&operator=(Cat const & rhs);
	void			makeSound(void) const ;
	~Cat();
};

#endif
