/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:13:44 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 13:57:21 by thhusser         ###   ########.fr       */
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

	protected:

		std::string		_type;

};

#endif
