/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:02:30 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/05 14:19:29 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

# include <iostream>
# include <string>

// # include "Form.hpp"
// # include <execption> --> a check! --> que pour les exception "bad arguments ..."
class Form;

class Bureaucrat {
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat	&operator=(Bureaucrat const & rhs);
		~Bureaucrat();
		void			signForm(Form const & src);
		std::string		getName(void) const;
		int				getGrade(void) const;
		void			gradeIncrement(void);
		void			gradeDecrement(void);
		class			GradeTooHighException : public std::exception {
			const char 	*what() const throw();
		};
		class			GradeTooLowException : public std::exception {
			const char 	*what() const throw();
		};

	private:
		std::string	const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif