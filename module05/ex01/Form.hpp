/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:42:24 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/04 14:39:07 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
# define _FORM_HPP_

class Form {
	public:
		Form();		
		Form(Form const & src);
		Form	&operator=(Form const & rhs);
		class	GradeTooHighException : public std::exception {
			const char *what() const throw;
		};
		class			GradeTooLowException : public std::exception {
			const char 	*what() const throw();
		};	
		~Form();
	private:
		std::string const 	name;
		bool				signed;
		int	const			grade_signed;		
		int	const			grade_execute;		
			
};

std::ostream	&operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif