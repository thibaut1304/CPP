/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:43:06 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/15 16:45:46 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() : _nbContact(0){
    
}

Phonebook::~Phonebook() {
    
}

void Phonebook::add_contact(int index) {
    std::string FN;
    std::string LN;
    std::string NN;
    std::string PN;
    std::string DS;

    std::cout << "First Name     : ";
    getline(std::cin, FN);
    std::cout << "Last Name      : ";
    getline(std::cin, LN);
    std::cout << "Nickname       : ";
    getline(std::cin, NN);
    std::cout << "Phone Number   : ";
    getline(std::cin, PN);
    std::cout << "Darkest Secret : ";
    getline(std::cin, DS);
    
    this->_contact[index].add(FN, LN, NN, PN, DS);
    if (this->_nbContact < 8)
        this->_nbContact += 1;
}

static std::string check_size(std::string name) {
    if (name.length() > WIDTH) {
        name.erase(WIDTH - 1, name.length());
        name.append(".");
    }
    return (name);
}

void    Phonebook::print_contact(int nb) {
    int index(0);

    std::string FN;
    std::string LN;
    std::string NN;

    std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
    while (index < nb)
    {
        std::cout << "|" << std::setw(WIDTH) << index << "|";
        FN = check_size(this->_contact[index].getFirst_name());
        std::cout << std::setw(WIDTH) << FN << "|";
        LN = check_size(this->_contact[index].getLast_name());
        std::cout << std::setw(WIDTH) << LN << "|";
        NN = check_size(this->_contact[index].getNickname());
        std::cout << std::setw(WIDTH) << NN << "|";
        std::cout << std::endl;
        index++;
    }
    std::cout << std::endl;
}

static bool    check_number_in_str(std::string str) {
    size_t i(0);
    while (i < str.length()) {
        if (isdigit(str[i]))
            i++;
        else
            return (false);
    }
    return (true);
}

void    Phonebook::search(void) {
    int id(0);
    char in[256];

    if (this->_nbContact == 0)
    {
        std::cout << "No contact in Phone Book !" << std::endl;
        std::cout << "$> ";
        return ;
    }
    print_contact(this->_nbContact);
    std::cout << "Enter index contact for visualisation : ";
    std::cin >> in;
    std::cout << std::endl;
    if (!check_number_in_str(in)) {
        std::cout << "Index of contact is invalid" << std::endl;
        return ;
    }
    id = atoi((char *)in);
    if (id < this->_nbContact && id >= 0)
    {
        std::cout << "Contact NUMBER : " << id << std::endl;
        std::cout << "First Name     : " << this->_contact[id].getFirst_name() << std::endl;
        std::cout << "Last Name      : " << this->_contact[id].getLast_name() << std::endl;
        std::cout << "Nickname       : " << this->_contact[id].getNickname() << std::endl;
        std::cout << "Phone Number   : " << this->_contact[id].getPhone_number() << std::endl;
        std::cout << "Darkest Secret : " << this->_contact[id].getDarkest_secret() << std::endl;
    }
    else
        std::cout << "Index of contact is invalid" << std::endl;
}