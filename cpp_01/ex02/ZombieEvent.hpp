/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:06:10 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/07 13:54:19 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string _type;

	public:
		void setZombieType(const std::string& type);
		Zombie* newZombie(const std::string& name);
		Zombie* randomChump(void);
};

#endif
