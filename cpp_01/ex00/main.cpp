/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 17:06:36 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/07 13:47:36 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnHeap(int age, const std::string& name, const std::string& color, const std::string &trait)
{
	Pony *newPony = new Pony(age, name, color, trait);
	if (!newPony)
	{
		std::cout << "Failed to allocate memory!" << std::endl;
		return ;
	}
	delete newPony;
}

void	ponyOnStack(int age, const std::string& name, const std::string& color, const std::string &trait)
{
	Pony newPony = Pony(age, name, color, trait);
}

int		main(void)
{
	ponyOnHeap(15, "Bob", "blue", "friendly");
	ponyOnStack(23, "Harold", "brown", "dickhead");
	return (0);
}
