/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:02:30 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/04 12:29:36 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

# include <iostream>
# include <string>
// # include <execption> --> a check!

class Bureaucrat {
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat	&operator=(Bureaucrat const & rhs);
		~Bureaucrat();
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