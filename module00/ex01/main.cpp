/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:18:07 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/14 16:11:28 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    std::string str;
    int index(0);

    Phonebook contact[MAX_CONTACT];
    while (1)
    {
        if (str != "ADD" && str != "SEARCH")
            std::cout << "$> ";
        if (!(std::getline(std::cin, str)))
            break ;
        if (str == "ADD" || str == "SEARCH")
        {
            if (str == "ADD" && index < MAX_CONTACT)
                contact[index++] = add_contact();
            else if (str == "ADD" && index >= MAX_CONTACT)
                contact[index - 1] = add_contact();
            if (str == "SEARCH" && index > 0)
                search(contact, index);
        }
        else if (str == "EXIT")
            break ;
    }
    return (0);
}
