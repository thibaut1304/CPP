/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:44:15 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/09 15:10:19 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_H_
# define _FIXED_H_

# include <iostream>

class Fixed {

	public:

		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed & operator=( Fixed const & rhs);
		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );

	private:

		int					_value;
		static int const 	_bits = 8;
};

#endif
