/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:17:32 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/09/30 13:26:34 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(const std::string& type)
{
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(const std::string& name)
{
	Zombie *newZombie = new Zombie(name, this->_type);
	if (!newZombie)
		std::cout << "Failed to allocate memory!" << std::endl;
	return (newZombie);
}

Zombie* ZombieEvent::randomChump(void)
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

	return (this->newZombie(names[std::rand() % 7]));
}
