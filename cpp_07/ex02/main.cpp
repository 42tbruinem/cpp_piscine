/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 13:58:49 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/01 12:58:22 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main()
{
	Array<int>	arr(5);

	// test for zero initialization
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << '\n';
	}

	std::cout << '\n';

	for (int i = 0; i < 5; i++)
	{
		arr[i] = (i) ? (arr[i - 1] * 2) : 1;
		std::cout << arr[i] << '\n';
	}
	std::cout << "size: " << arr.size() << '\n';

	std::cout << '\n';

	Array<double>	dbl(9);

	for (int i = 0; i < 9; i++)
	{
		dbl[i] = (i) ? dbl[i - 1] * 1.25 : 1.5;
		std::cout << dbl[i] << '\n';
	}
	std::cout << "size: " << dbl.size() << '\n';

	std::cout << '\n';

	Array<float>	flt(3);

	for (int i = 0; i < 3; i++)
	{
		flt[i] = i + 0.5;
		std::cout << flt[i] << '\n';
	}
	std::cout << "size: " << flt.size() << '\n';

	std::cout << '\n';

	Array<int>	empty;

	try
	{
		std::cout << empty[0] << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << empty[-1] << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "size: " << empty.size() << '\n';

	std::cout << '\n';

	Array<std::string>	str(2);

	str[0] = "Hello";
	str[1] = "World!";

	std::cout << str[0] << ' ' << str[1] << '\n';

	std::cout << '\n';

	Array<double>	x(3);

	for (int i = 0; i < 3; i++)
	{
		x[i] = i + 0.5;
		std::cout << "x: " << x[i] << '\n';
	}

	Array<double>	y(x);

	std::cout << "size of y after x copy: " << y.size() << '\n';
	for (int i = 0; i < 3; i++)
	{
		y[i] = y[i] + 0.3;
		x[i] = y[i]++;
		std::cout << "x: " << x[i] << ", y: " << y[i] << '\n';
	}

	return 0;
}
