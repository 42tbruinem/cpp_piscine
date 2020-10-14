/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 19:16:21 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/10/14 10:58:13 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <stdlib.h>
#include <ctime>


int	main(void)
{
	Span sp = Span(10000);
	std::vector<int> peervec;
	srand(time(NULL));
	for (int i = 0; i < 10000; i++)
	{
//		peervec.push_back(rand() % 100000);
		peervec.push_back(i);
	}
	try {
		sp.addNumber(peervec.begin(), peervec.end());
	}
	catch (std::exception& e) {
		std::cout << "failed: " << e.what() << std::endl;
	}
	try {
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	Span	other(6);

	other.addNumber(-20);
	other.addNumber(-13);
	other.addNumber(12);
	other.addNumber(20);
	other.addNumber(18);
	other.addNumber(-12);

	std::cout << "LONGEST: " << other.longestSpan() << std::endl;
	std::cout << "SHORTEST: " << other.shortestSpan() << std::endl;
	return 0;
}
