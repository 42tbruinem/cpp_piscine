/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:10:37 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/28 22:58:02 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void	Zombie::setType(const std::string& type)
{
	this->_type = type;
}

void	Zombie::setName(const std::string& name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << "A " << this->_type << " zombie by the name of " << this->_name << " has approached you and is politely requesting you to part with your brains, as it would like to have them for dinner." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "a new unnamed zombie approaches" << std::endl;
}

Zombie::Zombie(const std::string& name, const std::string &type)
{
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is slightly upset but understands you need your brains to \"live\" or whatever.. and he moves on." << std::endl;
}
