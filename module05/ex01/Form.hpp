/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:42:24 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/04 13:08:51 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
# define _FORM_HPP_

class Form {
	public:
		Form();		
		Form(Form const & src);
		Form	&operator=(Form const & rhs);
				
		~Form();
	private:
		std::string const 	name;
		bool				signed;
		int	const			grade_signed;		
		int	const			grade_execute;		
			
};

#endif