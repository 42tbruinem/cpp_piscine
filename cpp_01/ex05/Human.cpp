/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 23:44:42 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/09/30 13:32:57 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"

Brain& Human::getBrain(void)
{
	return (this->_brain);
}

Brain *Human::identify(void)
{
	return (this->_brain.identify());
}

Human::Human()
{

}

Human::~Human()
{

}
