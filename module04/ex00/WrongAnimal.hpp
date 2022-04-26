/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:04:19 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 13:32:27 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_HPP_
# define _WRONGANIMAL_HPP_

#include <iostream>
#include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal		&operator=(WrongAnimal const & rhs);
		~WrongAnimal();				// virtual ?
		void			makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string		_type;
};

#endif
