/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:42:24 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/05 14:26:56 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
# define _FORM_HPP_

# include "Bureaucrat.hpp"

class Form {
	public:
		Form(std::string const name, int signe, int execute);		
		Form(Form const & src);
		Form	&operator=(Form const & rhs);
		void			beSigned(Bureaucrat const & src);
		std::string		getName(void) const;
		bool			getSigned(void) const;
		int		getGradeSigned(void) const;
		int		getGradeExecute(void) const;
		class	GradeTooHighException : public std::exception {
			const char *what() const throw();
		};
		class			GradeTooLowException : public std::exception {
			const char 	*what() const throw();
		};	
		~Form();
	private:
		std::string const 	_name;
		bool				_signed;
		int	const			_gradeSigned;		
		int	const			_gradeExecute;		
			
};

std::ostream	&operator<<(std::ostream & o, Form const & rhs);

#endif