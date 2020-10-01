/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 16:46:08 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/27 19:36:47 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string login;
		std::string postalAddress;
		std::string emailAddress;
		std::string phoneNumber;
		std::string birthdayDate;
		std::string favoriteMeal;
		std::string underwearColor;
		std::string darkestSecret;

	public:
		contact();
		~contact();
		void setFirstName(const std::string& newFirstName);
		void setLastName(const std::string& newLastName);
		void setNickName(const std::string& newNickName);
		void setLogin(const std::string& newLogin);
		void setPostalAddress(const std::string& newPostalAddress);
		void setEmailAddress(const std::string& newEmailAdress);
		void setPhoneNumber(const std::string& newPhoneNumber);
		void setBirthdayDate(const std::string& newBirthdayDate);
		void setFavoriteMeal(const std::string& newFavoriteMeal);
		void setUnderwearColor(const std::string& newUnderwearColor);
		void setDarkestSecret(const std::string& newDarkestSecret);

		void showOverview(void);
		void showInformation(void);

		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getLogin(void);
		std::string getPostalAddress(void);
		std::string getEmailAddress(void);
		std::string getPhoneNumber(void);
		std::string getBirthdayDate(void);
		std::string getFavoriteMeal(void);
		std::string getUnderwearColor(void);
		std::string getDarkestSecret(void);
};

#endif
