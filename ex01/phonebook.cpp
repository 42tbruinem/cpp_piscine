/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 16:42:03 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/09/30 13:07:03 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.class.hpp"
#include "contact.class.hpp"

int		main(void)
{
	phonebook myPhonebook;

	std::string command = "";
	while (command.compare("EXIT"))
	{
		std::cout << "Phonebook > ";
		if (!command.compare("ADD"))
			myPhonebook.add();
		else if (!command.compare("SEARCH"))
			myPhonebook.search();
		getline(std::cin, command);
		if (std::cin.eof())
			break ;
	}
	return (0);
}
