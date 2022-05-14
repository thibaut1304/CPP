/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:02:21 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/14 20:09:48 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string const value) : _value(value) {
}

Convert::Convert(Convert const & src) : _value(src._value) {
}

Convert		&Convert::operator=(Convert const & rhs) {
	if (this != &rhs) {
		this->_value = rhs._value;
	}
	return (*this);
}

Convert::~Convert(void) {
}

void		Convert::parse() {
	char 	*endptr;
	char	tmp;

	if (_value.size() == 1) {
		tmp = _value[0];
		_d = static_cast<double>(tmp);
		if (tmp >= '0' && tmp <= '9')
			_d -= 48;
	}
	else if (_value.size() == 3 && _value[0] == '\'' && _value[2] == '\'') {
		tmp = _value[1];
		_d = static_cast<double>(tmp);
	}
	else {
		_d = std::strtod(_value.c_str(), &endptr);
		if (*endptr) {
			if (*endptr == 'f')
				endptr++;
			while (*endptr) {
				if (!isspace(*endptr))
					throw Convert::notConvertible();
				endptr++;
			}
		}
	}
}

void		Convert::toInt() {
	int		i;

	i = static_cast<int>(_d);
	if (_d > INT_MAX)
		std::cout << " > INT_MAX";
	else if (_d < INT_MIN)
		std::cout << " < INT_MIN";
	else if (isnan(_d) || isinf(_d))
		std::cout << "impossible";
	else
		std::cout << i;
}

void		Convert::toChar() {
	char	c;

	c = static_cast<char>(_d);
	if (c >= 32 && c <= 126)
		std::cout << c;
	else if (isnan(_d))
		std::cout << "impossible";
	else
		std::cout << "Non displayable";

}

void		Convert::toFloat() {
	float	f;

	f = static_cast<float>(_d);
	std::cout << f;
	if (f == floor(_d) && !isinf(_d))
		std::cout << ".0f";
	else
		std::cout << "f";
}

void		Convert::toDouble() {
	std::cout << _d;
	if (_d == floor(_d) && !isinf(_d))
		std::cout << ".0";

}

void		Convert::toPrint() {
	Convert::parse();
	std::cout << "char: ";
	Convert::toChar();
	std::cout << std::endl;
	std::cout << "int: ";
	Convert::toInt();
	std::cout << std::endl;
	std::cout << "float: ";
	Convert::toFloat();
	std::cout << std::endl;
	std::cout << "double: ";
	Convert::toDouble();
	std::cout << std::endl;
}
