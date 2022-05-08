/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:42:24 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/06 12:14:25 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AFORM_HPP_
# define _AFORM_HPP_

# include "Bureaucrat.hpp"

class AForm {
	public:
		AForm(std::string const name, int signe, int execute);
		AForm(AForm const & src);
		AForm			&operator=(AForm const & rhs);

		void			beSigned(Bureaucrat const & src);
		virtual void 	execute(Bureaucrat const & executor) const = 0;

		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getGradeSigned(void) const;
		int				getGradeExecute(void) const;
		class			GradeTooHighException : public std::exception {
						const char *what() const throw();
		};
		class			GradeTooLowException : public std::exception {
						const char 	*what() const throw();
		};
		class 			NotSignedException: public std::exception{
    					const char* what() const throw();
  		};
		virtual ~AForm();
	private:
		std::string const 	_name;
		bool				_signed;
		int	const			_gradeSigned;
		int	const			_gradeExecute;

};

std::ostream	&operator<<(std::ostream & o, AForm const & rhs);

#endif
