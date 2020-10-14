/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 15:58:44 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/08/15 14:48:16 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <deque>
#include <vector>

template<typename T>
void printArr(T arr)
{
	typename T::iterator iter = arr.begin();
	typename T::iterator end = arr.end();

	for (; iter != end; iter++)
	{
		std::cout << *iter;
		if (iter + 1 != end)
			std::cout << ",";
	}
	std::cout << std::endl;
}

int	main(void)
{
	std::deque<int> deq;
	std::deque<int>::iterator it;

	std::cout << "TESTING DEQUE:\n" << std::endl;

	it = easyfind(deq, 5);
	std::cout << "DEQ ";
	if (deq.end() != it)
		std::cout << "does contain " << *it << std::endl;
	else
		std::cout << "does not contain the number" << std::endl;

	for (unsigned int i = 0; i < 5; i++)
		deq.push_back(i);
	printArr(deq);
		it = easyfind(deq, 5);
	std::cout << "DEQ ";
	if (deq.end() != it)
		std::cout << "does contain " << *it << std::endl;
	else
		std::cout << "does not contain the number" << std::endl;
	deq.push_back(5);
	printArr(deq);
		it = easyfind(deq, 5);
	std::cout << "DEQ ";
	if (deq.end() != it)
		std::cout << "does contain " << *it << std::endl;
	else
		std::cout << "does not contain the number" << std::endl;

	std::cout << "\nTESTING VECTOR:\n" << std::endl;

	std::vector<int> vec;
	std::vector<int>::iterator vec_it;
		vec_it = easyfind(vec, 5);
	std::cout << "VEC ";
	if (vec.end() != vec_it)
		std::cout << "does contain " << *vec_it << std::endl;
	else
		std::cout << "does not contain the number" << std::endl;
	for (unsigned int i = 0; i < 5; i++)
		vec.push_back(i);
	printArr(vec);
		vec_it = easyfind(vec, 5);
	std::cout << "VEC ";
	if (vec.end() != vec_it)
		std::cout << "does contain " << *vec_it << std::endl;
	else
		std::cout << "does not contain the number" << std::endl;
	vec.push_back(5);
	printArr(vec);
		vec_it = easyfind(vec, 5);
	std::cout << "VEC ";
	if (vec.end() != vec_it)
		std::cout << "does contain " << *vec_it << std::endl;
	else
		std::cout << "does not contain the number" << std::endl;
	return (0);
}
