/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:53:29 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/29 16:01:18 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

std::string Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(const std::string& type)
{
	this->_type = type;
}

Weapon::Weapon()
{

}

Weapon::Weapon(const std::string& weaponType)
{
	this->_type = weaponType;
}

Weapon::~Weapon()
{

}
