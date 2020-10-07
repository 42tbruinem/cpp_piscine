/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 17:48:46 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/28 18:38:29 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	Zombie *heapZombie;
	ZombieEvent spawner;

	spawner.setZombieType("HUNGRY");
	heapZombie = spawner.newZombie("Roderik");
	delete heapZombie;
	for (int i = 0; i < 20; i++)
	{
		if (i == 10)
			spawner.setZombieType("FAMISHED");
		heapZombie = spawner.randomChump();
		delete heapZombie;
	}
	return (0);
}
