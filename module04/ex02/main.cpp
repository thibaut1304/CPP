/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:40:54 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/27 17:11:42 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"

#define ANIMALS 10

static void test(void)
{
	std::cout << "  **  Construct  **" << std::endl;
	AAnimal* 	tosca = new Dog();
	AAnimal*		felix = new Cat();
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Felix is a " << felix->getType() << " -> ";
	felix->makeSound();

	felix->add_ideas("Eat a mouse !!");
	felix->add_ideas("jump on butterflies !");
	felix->add_ideas("make my toilet");
	felix->add_ideas("sleeping on parents bed");

	std::cout << "the Felix's ideas : " << std::endl;
	felix->show_ideas();
	delete felix;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "tosca is a " << tosca->getType() << " -> ";
	tosca->makeSound();

	tosca->add_ideas("take a walk in the trash!");
	tosca->add_ideas("pissing on the neighbor's lawn");
	tosca->add_ideas("Playing with my favorite bone");
	std::cout << "the tosca's ideas : " << std::endl;
	tosca->show_ideas();
	delete tosca;
	std::cout << "***************************************************" << std::endl;
	std::cout << "--------------------TEST DEEP COPY-----------------" << std::endl;
	std::cout << "***************************************************" << std::endl;
	Cat	*originalCat = new Cat();
	originalCat->add_ideas("Une idée en l'air");
	std::cout << "  ** copy by constructor copy** " << std::endl;
	Cat	copyCat(*originalCat);
	std::cout << "------------" << std::endl;
	std::cout << " ideas of originalCat : " << std::endl;
	originalCat->show_ideas();
	std::cout << " ideas of copyCat : (with different memory addresses)" << std::endl;
	copyCat.show_ideas();
	std::cout << "------------" << std::endl;
	std::cout << "  ** copy by operator = ** " << std::endl;
	Cat	*copyCat2 = new Cat();
	*copyCat2 = *originalCat;
	std::cout << " ** delete originalCat **" << std::endl;
	delete originalCat;
	std::cout << " ideas of copyCat : " << std::endl;
	copyCat2->show_ideas();
	delete copyCat2;
}

int		main(void) {

	//const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	// meta->makeSound();

	std::cout << "\n --------------------------------------------- \n\n";

	const WrongAnimal *wrongA = new WrongAnimal();
	const WrongAnimal *wrongC = new WrongCat();

	std::cout << wrongA->getType() << " " << std::endl;
	std::cout << wrongC->getType() << " " << std::endl;
	wrongA->makeSound();
	wrongC->makeSound();

	delete wrongA;
	delete wrongC;
	// delete meta;
	delete i;
	delete j;

	std::cout << "\n --------------------------------------------- \n\n";

	const AAnimal	*farm[ANIMALS];

	for(int i = 0; i < ANIMALS; i++) {
		if (i < (ANIMALS / 2)) {
			std::cout << "Dog\n";
			farm[i] = new Dog();
		}
		else {
			std::cout << "Cat\n";
			farm[i] = new Cat();
		}
	}

	for(int i = 0; i < ANIMALS; i++)
		delete farm[i];

	test();
	return (0);
}
