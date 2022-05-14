/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:20:31 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/14 20:30:06 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void) {
	Data data;

	data.str = "I'am a test";
	data.nb = data.str.size();

	std::cout << "Data -> string = " << data.str << std::endl;
	std::cout << "Data -> size   = " << data.nb << std::endl;
	std::cout << "Memory adress  : " << &data << std::endl;

	uintptr_t serial;

	serial = serialize(&data);
	std::cout << "Data serialise = " << serial << std::endl;

	Data *test = deserialize(serial);

	std::cout << "Data -> string = " << test->str << std::endl;
	std::cout << "Data -> size   = " << test->nb << std::endl;
	std::cout << "Memory adress  : " << test << std::endl;


	return (0);
}
