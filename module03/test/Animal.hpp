/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:24:03 by root              #+#    #+#             */
/*   Updated: 2022/04/11 16:13:14 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

# include <iostream>
# include <string>

class Animal {

	public:

		Animal();
		Animal(int const nb);
		Animal(Animal const & src);
		Animal& operator=(Animal const & src);
		~Animal();

		int		getLegs(void) const;
		void	setLegs(int const legs);

	private:
		int		_numberLegs;

};

class Cat : public Animal {

	public:

		Cat();
		Cat(std::string const value);
		Cat(Cat const & src);
		Cat& operator=(Cat const & src);
		~Cat();

		std::string	getCall(void) const;
		void		setCall(std::string const & call);

	private:
		std::string 	_name;
};

#endif