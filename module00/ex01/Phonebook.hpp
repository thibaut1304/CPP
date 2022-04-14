/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:19:58 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/14 18:24:45 by thhusser         ###   ########.fr       */
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

    private:

    Contact contact[MAX_CONTACT];

};

Phonebook   add_contact(void);
void        search(Phonebook contact[], int index);

#endif