/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:06:07 by thhusser          #+#    #+#             */
/*   Updated: 2022/01/01 23:43:01 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"
    
Phonebook add_contact() {
    Phonebook new_contact;
    std::string FN;
    std::string LN;
    std::string NN;
    std::string PN;
    std::string DS;

    std::cout << "First Name     : ";
    std::cin >> FN;
    std::cout << "Last Name      : ";
    std::cin >> LN;
    std::cout << "Nickname       : ";
    std::cin >> NN;
    std::cout << "Phone Number   : ";
    std::cin >> PN;
    std::cout << "Darkest Secret : ";
    std::cin >> DS;
    
    new_contact.add(FN, LN, NN, PN, DS);
    return (new_contact);
}

std::string check_size(std::string name) {
    if (name.length() > WIDTH - 1)
        name.erase(WIDTH - 1, name.length());
    name.append(".");
    return (name);
}

static void print_contact(Phonebook contact[], int nb) {
    int index(0);

    std::string FN;
    std::string LN;
    std::string NN;

    std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
    while (index < nb)
    {
        std::cout << "|" << std::setw(WIDTH) << index << "|";
        FN = check_size(contact[index].getFirst_name());
        std::cout << std::setw(WIDTH) << FN << "|";
        LN = check_size(contact[index].getLast_name());
        std::cout << std::setw(WIDTH) << LN << "|";
        NN = check_size(contact[index].getNickname());
        std::cout << std::setw(WIDTH) << NN << "|";
        std::cout << std::endl;
        index++;
    }
    std::cout << std::endl;
}

void    search(Phonebook contact[], int nb) {
    int id(0);

    print_contact(contact, nb);
    std::cout << "Enter index contact for visualisation : ";
    std::cin >> id;
    std::cout << std::endl;
    if (std::cin.good() && id < nb && id >= 0)
    {
        std::cout << "Contact NUMBER : " << id << std::endl;
        std::cout << "First Name     : " << contact[id].getFirst_name() << std::endl;
        std::cout << "Last Name      : " << contact[id].getLast_name() << std::endl;
        std::cout << "Nickname       : " << contact[id].getNickname() << std::endl;
        std::cout << "Phone Number   : " << contact[id].getPhone_number() << std::endl;
        std::cout << "Darkest Secret : " << contact[id].getDarkest_secret() << std::endl;
    }
    else
        std::cout << "Number of contact is invalid" << std::endl;
}
