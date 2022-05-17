/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:23:55 by thhusser          #+#    #+#             */
/*   Updated: 2022/05/17 18:16:45 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void   list_test() {
    std::cout << "--- std::list test ---" << std::endl;

    std::list<int> mstack;

    mstack.push_back(5);
    mstack.push_back(17);

    std::cout << "Current top element: " << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << "Current top element: " << mstack.back() << std::endl;
    std::cout << "Size (1) = " << mstack.size() << std::endl;

    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);
    std::cout << "Size (5) = " << mstack.size() << std::endl;
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::list<int> s(mstack);
}

int main () {
    std::cout << "--- Mutant Stack test ---" << std::endl;
  MutantStack<int> mstack;
  
  mstack.push(5);
  mstack.push(17);
    std::cout << "Current top element: " << mstack.top() << std::endl;
  mstack.pop();
    std::cout << "Current top element: " << mstack.top() << std::endl;
  std::cout << "Size (1) = " << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);
  std::cout << "Size (5) = " << mstack.size() << std::endl;
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite)
  {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);
  list_test();
  return (0);
  }