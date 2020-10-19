/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/09 21:48:08 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/18 10:56:06 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <exception>

class Base
{
	public:
		virtual ~Base() {}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate(void)
{
	switch (rand() % 3)
	{
		case 0 : std::cout << "GENERATED A\n"; return (new A());
		case 1 : std::cout << "GENERATED B\n"; return (new B());
		case 2 : std::cout << "GENERATED C\n"; return (new C());
	}
	return (NULL);
}

void	identify_from_pointer(Base *p)
{
	std::cout << "From pointer: ";
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	std::cout << "From reference: ";
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {}
}

int	main(void)
{
	std::srand(time(NULL));

	for (unsigned int i = 0; i < 5; i++)
	{
		Base *p = generate();
		identify_from_pointer(p);
		identify_from_reference(*p);
		if (p && dynamic_cast<A *>(p))
		{
			delete (reinterpret_cast<A *>(p));
			p = NULL;
		}
		if (p && dynamic_cast<B *>(p))
		{
			delete (reinterpret_cast<B *>(p));
			p = NULL;
		}
		if (p && dynamic_cast<C *>(p))
		{
			delete (reinterpret_cast<C *>(p));
			p = NULL;
		}
	}
	return (0);
}
