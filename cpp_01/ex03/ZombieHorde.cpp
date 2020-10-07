/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:17:32 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/07 14:00:31 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_amount; i++)
	{
		this->_zombies[i].announce();
	}
}

void ZombieHorde::randomChumpRef(Zombie& zombie)
{
		static const std::string names[] = {
		"Bob",
		"Michael",
		"Fred",
		"Jake",
		"Hank",
		"Peter",
		"Ferdinand",
		"Frank",
	};

	zombie.setName(names[std::rand() % 8]);
	zombie.setType("HORDE");
}

ZombieHorde::ZombieHorde(int N)
{
	if (N > 0)
	{
		this->_zombies = new Zombie[N];
		this->_amount = N;
		for (int i = 0; i < N; i++)
			randomChumpRef(this->_zombies[i]);
	}
	else
	{
		this->_zombies = NULL;
		this->_amount = 0;
		std::cout << "You are misusing a constructor, I shouldnt even have to protect this.." << std::endl;
	}
}

ZombieHorde::ZombieHorde()
{
	this->_zombies = NULL;
	this->_amount = 0;
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
}
