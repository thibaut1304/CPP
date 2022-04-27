/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:07:49 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/27 17:10:51 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
	public:
		Cat();
		Cat(Cat const &src);
		Cat				&operator=(Cat const & rhs);

		void			makeSound(void) const ;
		void			show_ideas( void ) const;
		void			add_ideas(std::string const);
		~Cat();
	private:
			Brain			*_brain;
};

#endif
