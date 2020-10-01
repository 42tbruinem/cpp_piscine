/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 16:46:08 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/27 20:01:58 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "contact.class.hpp"

class phonebook
{
	private:
		contact contacts[8];
		static int contactAmount;

	public:
		int	getContactAmount(void);
		void add(void);
		void search(void);
		phonebook();
		~phonebook();
};

#endif
