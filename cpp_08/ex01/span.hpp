/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 17:08:02 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/08/15 15:15:55 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span
{
	private:
		std::vector<int>numbers;
		unsigned int length;
	public:
		~Span();
		Span(unsigned int N);
		Span(const Span& src);
		Span &operator = (const Span& src);
		void addNumber(int num);
		void addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
		int shortestSpan() const;
		unsigned long longestSpan() const;
};

#endif
