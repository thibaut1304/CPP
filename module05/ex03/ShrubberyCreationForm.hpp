/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:15:18 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/09 12:46:28 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &);
		~ShrubberyCreationForm();
		void					execute(Bureaucrat const & executor) const;
	private:
		std::string	 	_target;

};

#endif


