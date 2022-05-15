/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:14:53 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/15 16:22:10 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

int main(int, char**)
{
	unsigned int MAX_VAL = 10;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	Array<int> tmp = numbers;
	Array<int> test(tmp);

	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		std::cout << i << " numbers: " << numbers[i] << " mirror:" << mirror[i] << " tmp:" << tmp[i] << " test: " << test[i] << std::endl;
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}


    std::cout << "--- Check array affect after assignation test & numbers and +1 ---" << std::endl;
    test = numbers; 
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
        test[i] += 1;
		std::cout << i << " numbers: " << numbers[i] << " test: " << test[i] << std::endl;
    }


    std::cout << "--- Check array affect after test modification ---" << std::endl;
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
        test[i] = 42;
		std::cout << i << " tmp: " << tmp[i] << " test: " << test[i] << std::endl;
    }
	std::cout << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl;
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
		std::cout << i << " numbers: " << numbers[i] << " mirror: " << mirror[i] << std::endl;
	}
	delete [] mirror;
	return 0;
}