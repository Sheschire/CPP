/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:07:58 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/14 14:56:44 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void	Contact::color(std::string c, std::string s) const
{
	if (!c.compare("red"))
		std::cout << "\033[1;31m" + s + "\033[0m";
	else if (!c.compare("yellow"))
		std::cout << "\033[1;33m" + s + "\033[0m";
	else if (!c.compare("blue"))
		std::cout << "\033[1;34m" + s + "\033[0m";
	else if (!c.compare("green"))
		std::cout << "\033[1;32m" + s + "\033[0m";
}

int    Contact::setFirstName(std::string firstname)
{
	if (firstname.empty() == true)
		return(EMPTY_STRING);
	this->_first_name = firstname;
	return (1);
}

int    Contact::setLastName(std::string lastname)
{
	if (lastname.empty() == true)
		return(EMPTY_STRING);
	this->_last_name = lastname;
	return (1);   
}

int    Contact::setNickName(std::string nickname)
{
	if (nickname.empty() == true)
		return(EMPTY_STRING);
	this->_nickname = nickname;
	return (1);  
}

int    Contact::setPhoneNumber(std::string phone)
{
	int i = -1;

	if (phone.empty() == true)
		return(EMPTY_STRING);
	while (phone[++i])
		if (phone[i] < '0' || phone[i] > '9')
			return (NOT_A_DIGIT);
	if (phone.length() != 10)
		return (INVALID_NUMBER);
	this->_phone_number = phone;
	return (1);
}

int 	Contact::setDarkestSecret(std::string secret)
{
	if (secret.empty() == true)
		return(EMPTY_STRING);
	this->_darkest_secret = secret;
	return (1);
}

std::string    Contact::getContact(std::string s) const
{
	if (!s.compare("first name"))
		return (this->_first_name);
	if (!s.compare("last name"))
		return (this->_last_name);
	if (!s.compare("nickname"))
		return (this->_nickname);
	if (!s.compare("phone"))
		return (this->_phone_number);
	if (!s.compare("secret"))
		return (this->_darkest_secret);
	else
		return ("not a contact");
}