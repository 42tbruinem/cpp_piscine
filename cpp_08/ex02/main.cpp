/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 13:16:58 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/01 13:29:08 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>
#include <iostream>

int main() {
	MutantStack<int> mstack;
	std::cout << "PUSHING 2 values" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "TOP" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "POP 1" << std::endl;
	mstack.pop();
	std::cout << "SIZE" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "TOP" << std::endl;
	std::cout << mstack.top() << std::endl;

	std::cout << "PUSHING 4 values" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	while (it != ite)
	{
		std::cout << *it << ((it + 1 < ite) ? ", " : "\n");
		++it;
	}

	MutantStack<int> stackerino(mstack);
	std::cout << "EMPTYING ORIGINAL STACK.." << std::endl;
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();

	std::cout << "PRINTING COPY CONSTRUCTED STACK" << std::endl;
	MutantStack<int>::iterator iter = stackerino.begin();
	MutantStack<int>::iterator end = stackerino.end();
	
	while (iter != end)
	{
		std::cout << *iter << ((iter + 1 < end) ? ", " : "\n");
		++iter;
	}
	return 0;
}
