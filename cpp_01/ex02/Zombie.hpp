/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 17:56:26 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/07 13:53:30 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string _name;
		std::string _type;
		Zombie();
	public:
		void setType(const std::string& type);
		void setName(const std::string& name);
		Zombie(const std::string& name, const std::string &type);
		~Zombie();
		void announce(void);
};

#endif
