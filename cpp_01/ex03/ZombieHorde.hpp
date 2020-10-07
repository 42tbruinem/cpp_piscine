/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:06:10 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/09/28 15:52:37 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
	private:
		Zombie* _zombies;
		int _amount;

	public:
		void announce(void);
		void randomChumpRef(Zombie& zombie);
		ZombieHorde(int N);
		ZombieHorde();
		~ZombieHorde();
};

#endif
