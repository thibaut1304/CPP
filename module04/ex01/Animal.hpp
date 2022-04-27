/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:13:44 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/27 15:11:58 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

# include <iostream>
# include <string>

class Animal {

	public:

		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);
		Animal			&operator=(Animal const & rhs);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
		virtual void	add_ideas(std::string const);
		virtual	void	show_ideas( void ) const;

	protected:

		unsigned int	_nbIdeas;
		std::string		_type;

};

#endif
