/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/09 17:50:00 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/01 12:27:22 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>

std::string randStr()
{
	char str[8];

	for (int i = 0; i < 8; i++)
		while (!isalnum(str[i] = rand() % 127)) {}
	return (std::string(str, 8));
}

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void	printSerializedRaw(void *data)
{
	std::cout << "First 8 characters:\n";
	for (unsigned int i = 0; i < 8; i++)
		std::cout << (reinterpret_cast<char *>(data))[i];
	std::cout << "\nInteger:\n";
	std::cout << reinterpret_cast<int *>(data)[2] << std::endl;
	std::cout << "Last 8 characters:\n";
	for (unsigned int i = 0; i < 8; i++)
		std::cout << (reinterpret_cast<char *>(data))[i + 12];
	std::cout << "\n\n";
}

void	printSerializedData(void *data)
{
	std::cout << "First 8 characters:\n";
	std::cout << reinterpret_cast<struct Data *>(data)->s1 << std::endl;
	std::cout << "Integer:\n";
	std::cout << reinterpret_cast<struct Data *>(data)->n << std::endl;
	std::cout << "Last 8 characters:\n";
	std::cout << reinterpret_cast<struct Data *>(data)->s2 << "\n" << std::endl;
}

void	*serialize(void)
{
	char *serializedData = new char[(sizeof(char) * 16) + sizeof(int)];
	if (!serializedData)
		return (NULL);
	std::cout << "---SERIALIZE---\nSTR1: ";
	for (unsigned int i = 0; i < 8; i++)
	{
		while (!isprint(serializedData[i] = rand() % 127)) {}
		std::cout << serializedData[i];
	}
	std::cout << "\nINT: ";
	reinterpret_cast<int *>(serializedData)[2] = rand() % INT_MAX;
	std::cout << reinterpret_cast<int *>(serializedData)[2] << std::endl;
	std::cout << "STR2: ";
	for (unsigned int i = 0; i < 8; i++)
	{
		while (!isprint(serializedData[i + 12] = rand() % 127)) {}
		std::cout << serializedData[i + 12];
	}
	std::cout << "\n";
	return (serializedData);
}

struct Data *deserialize(void *raw)
{
	struct Data *data = new struct Data;
	if (!data)
		return (NULL);
	data->s1 = std::string(reinterpret_cast<char *>(raw), 8);
	data->n = reinterpret_cast<int *>(raw)[2];
	data->s2 = std::string(&(reinterpret_cast<char *>(raw)[12]), 8);
	return (data);
}

int	main(void)
{
	struct Data *deserialized;
	std::srand(time(NULL));
	for (unsigned int i = 0; i < 3; i++)
	{
		std::cout << "[" << i << "] RESULT:" << std::endl;
		void *data = serialize();
		deserialized = deserialize(data);
		std::cout << "---DESERIALIZE---\n";
		std::cout << "STR1: " << deserialized->s1 << std::endl;
		std::cout << "INT: " << deserialized->n << std::endl;
		std::cout << "STR2: " << deserialized->s2 << std::endl;
		delete [] reinterpret_cast<char *>(data);
		delete deserialized;
		std::cout << "\n";
	}
	return (0);
}
