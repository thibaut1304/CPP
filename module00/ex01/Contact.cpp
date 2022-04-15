/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:49:18 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/15 15:28:17 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	
}

Contact::~Contact() {
	
}

std::string Contact::getFirst_name() const {
    return (this->first_name);
}

std::string Contact::getLast_name() const {
    return (this->last_name);
}

std::string Contact::getNickname() const {
    return (this->nickname);
}

std::string Contact::getPhone_number() const {
    return (this->phone_number);
}

std::string Contact::getDarkest_secret() const {
    return (this->darkest_secret);
}

void    Contact::add(std::string FN, std::string LN, std::string NN, std::string PN, std::string DS) {
    this->first_name = FN;
    this->last_name = LN;
    this->nickname = NN;
    this->phone_number = PN;
    this->darkest_secret = DS;
}