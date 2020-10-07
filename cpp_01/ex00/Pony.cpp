/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 17:06:56 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/07 13:52:45 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony() {}

Pony::Pony(int age, const std::string& name, const std::string& color, const std::string &trait)
{
	this->_age = age;
	this->_name = name;
	this->_color = color;
	this->_trait = trait;
	std::cout << "Along comes " << this->_name << ", a " << this->_color << ", " << this->_trait << " pony." << std::endl;
}

Pony::~Pony()
{
	std::cout << this->_name << " turned into horse meat" << std::endl;
}
