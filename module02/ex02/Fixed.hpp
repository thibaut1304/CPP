/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:15:13 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/09 21:59:14 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_H_
# define _FIXED_H_

# include <iostream>
# include <math.h>

class Fixed {

	public:

		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const nb);
		Fixed(float const nb);
		~Fixed(void);

		Fixed	&operator=( Fixed const & rhs);

		bool	operator>( Fixed const & rhs);
		bool	operator<( Fixed const & rhs);
		bool	operator>=( Fixed const & rhs);
		bool	operator<=( Fixed const & rhs);
		bool	operator==( Fixed const & rhs);
		bool	operator!=( Fixed const & rhs);

		Fixed	operator+( Fixed const & rhs);
		Fixed	operator*( Fixed const & rhs);
		Fixed	operator-( Fixed const & rhs);
		Fixed	operator/( Fixed const & rhs);

		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	&operator++(void);
		Fixed	&operator--(void);

		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static const Fixed	&min(Fixed const &nb1, Fixed const &nb2);
		static const Fixed	&max(Fixed const &nb1, Fixed const &nb2);
		static Fixed	&min(Fixed &nb1, Fixed &nb2);
		static Fixed	&max(Fixed &nb1, Fixed &nb2);

	private:

		int					_value;
		static int const	_bits = 8;
};

std::ostream	&operator<<(std::ostream & o, Fixed const & rhs);

#endif
