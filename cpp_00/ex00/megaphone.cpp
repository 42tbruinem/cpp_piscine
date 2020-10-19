/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 16:03:40 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/27 16:24:01 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	std::string tmp;
	for (int i = 1; i < argc; i++)
	{
		tmp = argv[i];
		for (int j = 0; j < (int)tmp.length(); j++)
		{
			tmp[j] = std::toupper(tmp[j]);
		}
		std::cout << tmp;
	}
	std::cout << std::endl;
	return (0);
}
