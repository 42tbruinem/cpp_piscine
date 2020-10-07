/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 17:07:16 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/07 13:52:31 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Pony
{
	private:
		std::string _name;
		int _age;
		std::string _color;
		std::string _trait;
		Pony();
	public:
		Pony(int age, const std::string& name, const std::string& color, const std::string &trait);
		~Pony();
};
