/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:18:15 by thhusser          #+#    #+#             */
/*   Updated: 2022/01/01 17:18:17 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i(1); i < argc; i++)
        {
            std::string str = argv[i];
            for (size_t y(0); y < str.length(); y++)
                std::cout << (char)std::toupper(str[y]);
        }
        std::cout << std::endl;
    }
    return (0);
}