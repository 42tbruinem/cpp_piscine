/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 12:56:58 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/01 12:46:45 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void	print(const T& a)
{
	std::cout << a;
}

template <typename T>
void iter(T *array, size_t length, void (*f)(const T&))
{
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

int	main(void)
{
	char	str[10];
	int		num[9];
	std::srand(time(NULL));

	for (unsigned int i = 0; i < 9; i++)
	{
		str[i] = (rand() % 25) + 97;
		num[i] = (rand() % 10);
	}
	str[9] = 0;
	std::cout << "BEFORE :" << std::endl;
	iter(str, 9, print);
	std::cout << "\n";
	for (int i = 0; i < 9; i++)
		str[i]++;
	std::cout << "AFTER:" << std::endl;
	iter(str, 9, print);
	std::cout << "\n";
	std::cout << "BEFORE:" << std::endl;
	iter(num, 9, print);
	std::cout << "\n";
	for (int i = 0; i < 9; i++)
		num[i]++;
	std::cout << "AFTER: " << std::endl;;
	iter(num, 9, print);
	std::cout << "\n";
	return (0);
}
