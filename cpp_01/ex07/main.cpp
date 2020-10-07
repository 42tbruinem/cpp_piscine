/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 16:39:19 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/07 14:10:56 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int	error(std::string errmsg)
{
	std::cout << errmsg << std::endl;
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (error("Please provide valid input."));
	std::ifstream	input(argv[1]);
	if (input.bad())
		return (error("Please provide a valid input file."));
	if (!argv[2][0] || !argv[3][0])
		return (error("Please dont provide empty strings."));
	std::string outputFilename = argv[1];
	outputFilename += ".replace";
	std::ofstream	output(outputFilename.c_str());
	std::string buf;
	std::string to_find(argv[2]);
	std::string replace(argv[3]);
	while (std::getline(input, buf))
	{
		size_t index = buf.find(to_find.c_str(), 0);
		while (index != std::string::npos)
		{
			buf = buf.replace(index, to_find.size(), replace);
			index += replace.size();
			index = buf.find(to_find.c_str(), index);
		}
		output << buf;
		if (input.eof())
			break ;
		output << std::endl;
	}
	output.close();
	input.close();
	return (0);
}
