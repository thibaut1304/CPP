/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:16:12 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/09 14:35:34 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTER_HPP_
# define _INTER_HPP_

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		Intern(Intern const &);
		Intern	&operator=(Intern const &);
		~Intern();
		Form			*makeForm(std::string const nameForm, std::string const targetForm);
		class			NameFormError : public std::exception {
						const char *what() const throw();
		};
};

#endif