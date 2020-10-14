/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 15:59:03 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/08/15 14:52:03 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <iterator>

template<typename T>
typename T::iterator easyfind(T& a, int b)
{
	return (std::find(a.begin(), a.end(), b));
}

#endif
