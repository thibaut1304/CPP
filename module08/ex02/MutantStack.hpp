/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:21:07 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/17 18:11:59 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANSTACK_HPP_
# define _MUTANSTACK_HPP_

# include <iostream>
# include <stack>
# include <list>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack<T> const & src) : std::stack<T>(src) {
			_stack = src._stack;
		}
		MutantStack<T>	&operator=(MutantStack<T> const & rhs) {
			if (this != &rhs)
				_stack = rhs._stack;
			return (*this);
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {return (this->c.begin());}
		iterator end() {return (this->c.end());}
		~MutantStack() {}
		std::stack<T>		getStack() {
			return (_stack);
		}
	private:
		std::stack<T> _stack;

};

#endif