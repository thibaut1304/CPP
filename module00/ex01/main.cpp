/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:18:07 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/15 17:01:17 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    std::string str;
    int index(0);

    Phonebook book;
    std::cout << "Usage : ADD | SEARCH | EXIT !" << std::endl;
    while (1)
    {
        if (str != "SEARCH")
            std::cout << "$> ";
        if (!(std::getline(std::cin, str)))
            break ;
        if (str == "ADD" || str == "SEARCH")
        {
            if (index >= MAX_CONTACT)
                index = 0;
            if (str == "ADD" && index < MAX_CONTACT)
                book.add_contact(index++);
            if (str == "SEARCH") {
                book.search(); 
            }
        }
        else if (str == "EXIT")
            break ;
    }
    return (0);
}
