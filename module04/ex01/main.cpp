/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:40:54 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/26 13:34:33 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"

int		main(void) {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\n --------------------------------------------- \n\n";

	const WrongAnimal *wrongA = new WrongAnimal();
	const WrongAnimal *wrongC = new WrongCat();

	std::cout << wrongA->getType() << " " << std::endl;
	std::cout << wrongC->getType() << " " << std::endl;
	wrongA->makeSound();
	wrongC->makeSound();

	delete wrongA;
	delete wrongC;
	delete meta;
	delete i;
	delete j;
	return (0);
}
