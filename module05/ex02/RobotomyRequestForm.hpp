/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:22:10 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/09 12:46:23 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMY_REQUEST_FORM_HPP_
# define _ROBOTOMY_REQUEST_FORM_HPP_

#include "Form.hpp"
#include <stdlib.h>

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const &);
		RobotomyRequestForm		&operator=(RobotomyRequestForm const &);
		~RobotomyRequestForm();
		void					execute(Bureaucrat const & executor) const;
	private:
		std::string			_target;
};

#endif
