/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:19:58 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/15 16:51:14 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_H_
# define _PHONEBOOK_H_

# define MAX_CONTACT 8
# define WIDTH 10

# include <string>
# include <iostream>
# include <iomanip>
# include <cctype>
# include <cstdlib>

# include "Contact.hpp"

class Phonebook
{
    public:

    Phonebook();
    ~Phonebook();
    void   add_contact(int index);
    void    search(void);
    void    print_contact(int index);
    
    private:

    Contact _contact[MAX_CONTACT];
    int     _nbContact;
};

#endif