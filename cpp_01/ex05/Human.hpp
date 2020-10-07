/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 23:39:51 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/09/30 13:32:41 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class Human
{
	private:
		Brain _brain;
	public:
		Brain& getBrain(void);
		Brain *identify(void);
		Human();
		~Human();
};

#endif
