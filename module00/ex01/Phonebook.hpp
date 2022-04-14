/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:19:58 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/14 15:48:50 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# define MAX_CONTACT 8
# define WIDTH 10

# include <string>
# include <iostream>
# include <iomanip>
# include <cctype>
# include <cstdlib>

class Phonebook
{
    public:

    Phonebook();
    void    add(std::string FN, std::string LN, std::string NN, std::string PN, std::string DS);
    std::string getFirst_name() const;
    std::string getLast_name() const;
    std::string getNickname() const;
    std::string getPhone_number() const;
    std::string getDarkest_secret() const;
    
    private:

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

Phonebook   add_contact(void);
void        search(Phonebook contact[], int index);

#endif