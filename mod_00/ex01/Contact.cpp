/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:07:58 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/10 16:17:48 by tlemesle         ###   ########.fr       */
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
	while (phone[++i])
		if (phone[i] < '0' || phone[i] > '9')
			return (NOT_A_DIGIT);
	// if (phone.length() != 10)
	// 	return (INVALID_NUMBER);
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

void    Contact::getContact(void) const
{
	std::cout << "Contact first name : " << this->_first_name << std::endl;
	std::cout << "Contact last name : " << this->_last_name << std::endl;
	std::cout << "Contact nick name : " << this->_nickname << std::endl;
	std::cout << "Contact phone number : " << this->_phone_number << std::endl;
	std::cout << "Contact darkest secret : " << this->_darkest_secret << std::endl;
}