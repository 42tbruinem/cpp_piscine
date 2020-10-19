/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 19:19:16 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/28 16:51:45 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include <iostream>

void	contact::setFirstName(const std::string& name)
{
	this->firstName = name;
}

void	contact::setLastName(const std::string& name)
{
	this->lastName = name;
}

void	contact::setDarkestSecret(const std::string& name)
{
	this->darkestSecret = name;
}

void	contact::setLogin(const std::string& name)
{
	this->login = name;
}

void	contact::setNickName(const std::string& name)
{
	this->nickName = name;
}

void	contact::setPhoneNumber(const std::string& name)
{
	this->phoneNumber = name;
}

void	contact::setUnderwearColor(const std::string& name)
{
	this->underwearColor = name;
}

void	contact::setPostalAddress(const std::string& name)
{
	this->postalAddress = name;
}

void	contact::setFavoriteMeal(const std::string& name)
{
	this->favoriteMeal = name;
}

void	contact::setEmailAddress(const std::string& name)
{
	this->emailAddress = name;
}

void	contact::setBirthdayDate(const std::string& name)
{
	this->birthdayDate = name;
}

std::string contact::getBirthdayDate(void)
{
	return (this->birthdayDate);
}

std::string contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

std::string contact::getEmailAddress(void)
{
	return (this->emailAddress);
}

std::string contact::getFavoriteMeal(void)
{
	return (this->favoriteMeal);
}

std::string contact::getFirstName(void)
{
	return (this->firstName);
}

std::string contact::getLastName(void)
{
	return (this->lastName);
}

std::string contact::getLogin(void)
{
	return (this->login);
}

std::string contact::getNickName(void)
{
	return (this->nickName);
}

std::string contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string contact::getPostalAddress(void)
{
	return (this->postalAddress);
}

std::string contact::getUnderwearColor(void)
{
	return (this->underwearColor);
}

void	contact::showOverview(void)
{
	

}

void	contact::showInformation(void)
{
	std::cout << "First name: " << this->getFirstName() << std::endl;
	std::cout << "Last name: " << this->getLastName() << std::endl;
	std::cout << "Nickname: " << this->getNickName() << std::endl;
	std::cout << "Login: " << this->getLogin() << std::endl;
	std::cout << "Postal address: " << this->getPostalAddress() << std::endl;
	std::cout << "Email address: " << this->getEmailAddress() << std::endl;
	std::cout << "Phone number: " << this->getPhoneNumber() << std::endl;
	std::cout << "Birthday date: " << this->getBirthdayDate() << std::endl;
	std::cout << "Favorite meal: " << this->getFavoriteMeal() << std::endl;
	std::cout << "Underwear color: " << this->getUnderwearColor() << std::endl;
	std::cout << "Darkest secret: " << this->getDarkestSecret() << std::endl;
}

contact::contact()
{

}

contact::~contact()
{

	
}
