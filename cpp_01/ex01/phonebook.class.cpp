/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 18:13:35 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/09/30 13:11:06 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.class.hpp"
#include "contact.class.hpp"
#include <sstream>
#include <iomanip>

int phonebook::contactAmount = 0;

int phonebook::getContactAmount(void)
{
	return (this->contactAmount);
}

void phonebook::add(void)
{
	std::string name;

	if (this->contactAmount >= 8)
	{
		std::cout << "ERROR: Cant add any more contacts! Phonebook is full." << std::endl;
		return ;
	}
	contact& newContact = this->contacts[this->contactAmount];

	std::cout << "Enter the contact's first name" << std::endl;
	std::cin >> name;
	newContact.setFirstName(name);
	std::cout << "Enter the contact's last name" << std::endl;
	std::cin >> name;
	newContact.setLastName(name);
	std::cout << "Enter the contact's nickname" << std::endl;
	std::cin >> name;
	newContact.setNickName(name);
	std::cout << "Enter the contact's login" << std::endl;
	std::cin >> name;
	newContact.setLogin(name);
	std::cout << "Enter the contact's postal address" << std::endl;
	std::cin >> name;
	newContact.setPostalAddress(name);
	std::cout << "Enter the contact's email address" << std::endl;
	std::cin >> name;
	newContact.setEmailAddress(name);
	std::cout << "Enter the contact's underwear color" << std::endl;
	std::cin >> name;
	newContact.setUnderwearColor(name);
	std::cout << "Enter the contact's birthday" << std::endl;
	std::cin >> name;
	newContact.setBirthdayDate(name);
	std::cout << "Enter the contact's phone number" << std::endl;
	std::cin >> name;
	newContact.setPhoneNumber(name);
	std::cout << "Enter the contact's favorite meal" << std::endl;
	std::cin >> name;
	newContact.setFavoriteMeal(name);
	std::cout << "Enter the contact's darkest secret" << std::endl;
	std::cin >> name;
	newContact.setDarkestSecret(name);
	this->contactAmount++;
}

std::string getTruncatedString(std::string raw)
{
	std::string formatted = "";

	if (raw.length() <= 10)
		return (raw);
	formatted += raw.substr(0, 9);
	formatted += ".";
	return (formatted);
}

bool onlyDigitsInString(const std::string& numberstring)
{
	for (unsigned long i = 0; i < numberstring.length(); i++)
	{
		if (!isdigit(numberstring[i]))
			return (false);
	}
	return (true);
}

void phonebook::search(void)
{
	std::string indexStr;
	std::cout << std::endl;
	std::cout << "     INDEX| FIRSTNAME|  LASTNAME|  NICKNAME" << std::endl;
	for (int i = 0; i < this->contactAmount; i++)
	{
		std::stringstream ss;
		ss << i;
		std::string numstring;
		ss >> numstring;
		std::cout << std::setw(10) << getTruncatedString(numstring);
		std::cout << "|"; 
		std::cout << std::setw(10) << getTruncatedString(this->contacts[i].getFirstName());
		std::cout << "|";
		std::cout << std::setw(10) << getTruncatedString(this->contacts[i].getLastName());
		std::cout << "|"; 
		std::cout << std::setw(10) << getTruncatedString(this->contacts[i].getNickName());
		std::cout << std::endl;
	}
	std::cout << "For which index would you like to see more information?" << std::endl;
	std::cin >> indexStr;
	if (indexStr.empty())
		return ;
	if (!onlyDigitsInString(indexStr))
	{
		std::cout << "Please enter only digits" << std::endl;
		return ;
	}
	int index = indexStr[0] - '0';
	if (indexStr.length() > 1 || index + 1 > this->contactAmount)
	{
		std::cout << "There was an error retrieving the information, please input a valid and occupied index" << std::endl;
		return ;
	}
	this->contacts[index].showInformation();
}

phonebook::phonebook()
{

}

phonebook::~phonebook()
{
	
}
