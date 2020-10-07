/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 23:26:08 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/28 23:29:34 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string greeting = "HI THIS IS BRAIN";
	std::string* greetingPtr = &greeting;
	std::string& greetingRef = greeting;

	std::cout << greeting << std::endl;
	std::cout << *greetingPtr << std::endl;
	std::cout << greetingRef << std::endl;
	return (0);
}
