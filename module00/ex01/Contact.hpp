/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:46:22 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/15 17:01:48 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_HPP_
# define _CONTACT_HPP_

# include <string>
# include <iostream>

class Contact {

	public:
	Contact();
	~Contact();
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

#endif