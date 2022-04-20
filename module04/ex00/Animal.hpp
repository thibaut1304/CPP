/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:13:44 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/20 17:25:15 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

# include <iostream>
# include <string>

class Aniaml {

	public:

		Animal(void);
		Animal(Animal const & src);
		~Animal(void);
		Animal			&operator=(Animal const & rhs);
		void			makesound(void);

	protected:

		std::string		_type;

};

#endif