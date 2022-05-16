/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:54:38 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/16 11:50:19 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONVERT_HPP_
# define _CONVERT_HPP_

# include <math.h>
# include <string>
# include <iostream>
# include <cstdlib>
# include <climits>

class Convert {
	public:
		Convert(std::string const value);
		Convert(Convert const & src);
		~Convert(void);
		Convert		&operator=(Convert const & rhs);
		class		notConvertible : public std::exception {
			char const * what() const throw() { return ("Not convertible");}
		};
		void	toPrint();
	private:
		void	parse();
		void	toChar();
		void	toInt();
		void	toFloat();
		void	toDouble();
		Convert(void);
		std::string 	_value;
		double			_d;
};

#endif
