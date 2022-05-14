/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:16:55 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/14 20:27:01 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DATA_HPP_
# define _DATA_HPP_

# include <string>
# include <iostream>
# include <stdint.h>

struct Data {
	std::string str;
	int nb;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
