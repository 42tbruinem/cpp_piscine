/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 13:18:49 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/08/10 14:38:54 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	private:
		const unsigned int length;
		T *data;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array& src);
		Array &operator = (const Array& src);
		T& operator [] (int n);
		unsigned int size() const;
};

#include "Array.ipp"

#endif
