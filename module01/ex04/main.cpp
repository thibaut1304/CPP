/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:39:52 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/08 18:44:12 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int		check_arg(int argc) {
	if (argc < 4)
	{
		std::cout << "Bad arguments !" << std::endl;
		std::cout << "Usage : file, S1, S2 !" << std::endl;
		return (1);
	}
	return (0);
}

int		check_file_empty(std::string fileName) {
	std::string buff;
	std::string str;
	std::ifstream input(fileName.c_str());
	if (input)
	{
		while (getline(input, buff))
			if (buff.length() != 0)
				str += buff;
		if (str.empty())
		{
			std::cout << "File : " << fileName << " is empty" << std::endl;
			return (1);
		}
	}
	return (0);
}

int		check_arg_string(std::string & s1, std::string & s2) {
	if (s2.empty() || s1.empty())
	{
		std::cout << "S1 or S2 is empty !" << std::endl;
		return (1);
	}
	return (0);
}

void	find_and_replace(std::string &s1, std::string &s2, std::ifstream &input, std::string &fileName) {
	std::string buff;
	std::ofstream output(fileName + ".replace");
	int i(0);

	while (getline(input, buff))
	{
		size_t index = buff.find(s1);
		while (index != std::string::npos)
		{
			buff.erase(index, s1.length());
			buff.insert(index, s2);
			index = buff.find(s1, index);
			i++;
		}
		output << buff + '\n';
	}
	output.close();
	if (i == 0)
		std::cout << "No matching word !" << std::endl;
}

int 	main(int argc, char **argv)
{
	if (check_arg(argc))
		return (0);

	std::string fileName(argv[1]);
	std::ifstream input(fileName.c_str());
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	if (check_file_empty(fileName))
		return (1);
	if (input)
	{
		if (check_arg_string(s1, s2))
			return (1);
		find_and_replace(s1, s2, input, fileName);
		input.close();
	}
	else
	 	std ::cout << "Erreur open : " << fileName << std::endl;
	return (0);
}
