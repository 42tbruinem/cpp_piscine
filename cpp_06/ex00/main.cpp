/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 16:54:20 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/18 10:52:18 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cfloat>
#include <climits>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <string>
#include <sstream>
#include <cerrno>
#include <cstdio>

enum e_flags
{
	E_INF,
	E_NAN
};

template<typename T>
T StringToNumber(const std::string& numberAsString)
{
	T valor;

	std::stringstream stream(numberAsString);
	stream >> valor;
	if (stream.fail())
		return (0);
	return valor;
}

int error(std::string errmsg)
{
	std::cerr << errmsg << std::endl;
	return (1);
}

bool isChar(std::string str, long double *value)
{
	if (str.length() != 1)
		return (false);
	*value = static_cast<int>(str[0]);
	std::cerr << "CHAR FOUND\n";
	return (true);
}

bool isInt(std::string str, long double *value)
{
	if (str.find('.') != std::string::npos)
		return (false);
	size_t	i = (str[0] == '-') ? 1 : 0;
	for (; i < str.size() ; i++)
		if (!isdigit(str[i]))
			return (false);
	if (str[0] == '-' && i == 1)
		return (false);
	extern int errno;
	char *endptr;
	errno = 0;
	double	temp = strtod(str.c_str(), &endptr);
	if (errno)
		return (false);
	if (temp > INT_MAX || temp < -INT_MAX - 1)
		return (false);
	*value = temp;
	std::cerr << "INT FOUND\n";
	return (true);
}

bool isFloat(std::string str, long double *value, bool *flags)
{
	if (str.size() <= 1)
		return (false);
	if (!str.compare("nanf"))
	{
		*value = static_cast<float>(NAN);
		flags[E_NAN] = true;
		return (true);
	}
	if (!str.compare("+inff"))
	{
		*value = static_cast<float>(INFINITY);
		flags[E_INF] = true;
		return (true);
	}
	if (!str.compare("-inff"))
	{
		*value = static_cast<float>(-INFINITY);
		flags[E_INF] = true;
		return (true);
	}
	char	*endptr;
	extern int errno;
	errno = 0;
	double	temp = strtod(str.c_str(), &endptr);
	if (errno)
		return (false);
	if (str.c_str()[str.size() - 1] != 'f')
		return (false);
	if (*endptr != 'f' || str.c_str() + str.size() - 1 != endptr)
		return (false);
	if (temp > FLT_MAX || temp < -FLT_MAX - 1)
		return (false);
	*value = temp;
	std::cerr << "FLOAT FOUND\n";
	return (true);
}

bool isDouble(std::string str, long double *value, bool *flags)
{
	if (str.size() <= 1)
		return (false);
	if (!str.compare("nan"))
	{
		*value = static_cast<double>(NAN);
		flags[E_NAN] = true;
		return (true);
	}
	if (!str.compare("+inf"))
	{
		*value = static_cast<double>(INFINITY);
		flags[E_INF] = true;
		return (true);
	}
	if (!str.compare("-inf"))
	{
		*value = static_cast<double>(-INFINITY);
		flags[E_INF] = true;
		return (true);
	}
	extern int errno;
	char	*endptr;
	errno = 0;
	double temp = strtod(str.c_str(), &endptr);
	if (errno)
		return (false);
	if (str.c_str() + str.size() != endptr)
		return (false);
	*value = static_cast<double>(temp);
		std::cerr << "DOUBLE FOUND\n";
	return (true);
}

int main(int argc, char **argv)
{
	long double value = 0;
	static bool flags[2];
	bool conversionFound = false;

	if (argc != 2 || argv[1][0] == '\0')
		return (error("Please provide a valid argument"));
	conversionFound =  isInt(argv[1], &value) || (isFloat(argv[1], &value, flags) || isDouble(argv[1], &value, flags) || isChar(argv[1], &value));
	if (!conversionFound)
		return (error("No valid conversion could be found"));
	std::cout << "char: ";
	if ((CHAR_MIN > value || CHAR_MAX < value) || (flags[E_INF] || flags[E_NAN]))
		std::cout << "impossible" << std::endl;
	else
	{
		if (std::isprint(static_cast<char>(value)))
			std::cout << "\'" << static_cast<char>(value) << "\'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}

	std::cout << "int: ";
	if ((INT_MIN > value || INT_MAX < value) || (flags[E_INF] || flags[E_NAN]))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;

	std::cout << "float: ";
	if ((-FLT_MAX > value || FLT_MAX < value) && !(flags[E_INF] || flags[E_NAN]) && value != 0)
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;

	std::cout << "double: ";
	if ((-DBL_MAX > value || DBL_MAX < value) && !(flags[E_NAN] || flags[E_INF]) && value != 0)
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
	return (0);
}
