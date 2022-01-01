/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:06:07 by thhusser          #+#    #+#             */
/*   Updated: 2022/01/01 18:46:22 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"

    // std::string first_name;
    // std::string last_name;
    // std::string nickname;
    // std::string phone_number;
    // std::string darkest_secret;
    
Phonebook add() {
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

void    search(Phonebook contact[], int nb) {
    int index(0);

    while (index < nb)
    {
        std::cout << "Contact NUMBER : " << index + 1 << std::endl;
        std::cout << "First Name     : " << contact[index].getFirst_name() << std::endl;
        std::cout << "Last Name      : " << contact[index].getLast_name() << std::endl;
        std::cout << "Nickname       : " << contact[index].getNickname() << std::endl;
        std::cout << "Phone Number   : " << contact[index].getPhone_number() << std::endl;
        std::cout << "Darkest Secret : " << contact[index].getDarkest_secret() << std::endl << std::endl;
        index++;
    }
}