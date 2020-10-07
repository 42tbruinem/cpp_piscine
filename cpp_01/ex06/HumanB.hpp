/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:55:21 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/07 14:04:08 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon* _weapon;
		std::string _name;
		HumanB();
	public:
		HumanB(const std::string& name);
		~HumanB();
		void setWeapon(Weapon& weapon);
		void attack(void);
};

#endif
