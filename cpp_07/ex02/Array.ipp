/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.ipp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 13:28:52 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/01 12:58:05 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>

template <typename T>
Array<T>::Array() : length(0)
{
	this->data = NULL;
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->data;
}

template <typename T>
Array<T>::Array(unsigned int n) : length(n)
{
	this->data = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->data[i] = T();
}

template <typename T>
Array<T>::Array(const Array& src) : length(src.size())
{
	this->data = NULL;
	*this = src;
}

template <typename T>
Array<T> &Array<T>::operator = (const Array<T>& src)
{
	if (src.size())
	{
		delete [] this->data;
		this->data = new T[src.size()];
		for (unsigned int i = 0; i < src.size(); i++)
			this->data[i] = T(src.data[i]);
	}
	else
		this->data = NULL;
	return (*this);
}

template <typename T>
T &Array<T>::operator [] (int n)
{
	if (!this->data || n < 0 || (unsigned int)n >= this->length)
		throw (std::runtime_error("Error: Invalid dereference attempted"));
	return (this->data[n]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->length);
}
