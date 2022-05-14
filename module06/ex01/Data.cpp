/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:18:42 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/14 20:20:26 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

