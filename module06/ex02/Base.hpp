/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:25:12 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/16 11:30:04 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BASE_HPP_
# define _BASE_HPP_

# include <iostream>
# include <cstdlib>

class Base {
	public:
		virtual	~Base() {};
};

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

#endif