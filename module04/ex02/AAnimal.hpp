/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:13:44 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/27 17:10:37 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AANIMAL_HPP_
# define _AANIMAL_HPP_

# include <iostream>
# include <string>

class AAnimal {

	public:

		AAnimal(void);
		AAnimal(AAnimal const & src);
		virtual ~AAnimal(void);
		AAnimal			&operator=(AAnimal const & rhs);
		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
		virtual void	add_ideas(std::string const) = 0;
		virtual	void	show_ideas( void ) const = 0;

	protected:

		unsigned int	_nbIdeas;
		std::string		_type;

};

#endif
