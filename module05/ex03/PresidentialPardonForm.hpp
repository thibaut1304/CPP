/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:24:34 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/09 12:46:19 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIAL_PARDON_FORM_HPP_
# define _PRESIDENTIAL_PARDON_FORM_HPP_

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const &);
		PresidentialPardonForm		&operator=(PresidentialPardonForm const &);
		~PresidentialPardonForm();
		void 						execute(Bureaucrat const &executor) const;

	private:
		std::string 		_target;
};

#endif
