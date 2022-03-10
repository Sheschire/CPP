/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:07:32 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/10 16:28:47 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() : index(0) {}

Phonebook::~Phonebook() {}

void	Phonebook::color(std::string c, std::string s) const
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

void    Phonebook::addContact(void)
{
	if (this->index == 8)
		this->index = 0;
	std::cout << " " << std::endl;
	color("green", "Enter new contact informations :\n");
	this->addInfos("First Name : ", &Contact::setFirstName, this->index);
	this->addInfos("Last Name : ", &Contact::setLastName, this->index);
	this->addInfos("Nick Name : ", &Contact::setNickName, this->index);
	this->addInfos("Phone Number : ", &Contact::setPhoneNumber, this->index);
	this->addInfos("Darkest Secret : ", &Contact::setDarkestSecret, this->index);
	color("yellow", "A new contact has been added to Phonebook !\n");
	std::cout << " " << std::endl;
	this->index++;
	
}

void    Phonebook::addInfos(std::string prompt, int (Contact::*f)(std::string), int index)
{
	std::string input;
	bool        valid_input = false;

	while (valid_input != true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if ((this->_contact_arr[index].*f)(input) == 1)
			valid_input = true;
		else if ((this->_contact_arr[index].*f)(input) == EMPTY_STRING)
			color("red", "Error: Empty string is not allowed\n");
		else if ((this->_contact_arr[index].*f)(input) == NOT_A_DIGIT)
			color("red", "Error: Only digits are allowed\n");
		else if ((this->_contact_arr[index].*f)(input) == INVALID_NUMBER)
			color("red", "Error: Phone number needs to contain 10 digits\n");
	}
}

int	Phonebook::getIndex(void) const
{
	return (this->index);
}

void	Phonebook::searchContact(void)
{
	std::string	input;
	
	input = "";
	this->printPrompt(input);
	color("green", "Enter contact index : ");
	std::cin >> input;
	this->printPrompt(input);
}

void	Phonebook::printPrompt(std::string input)
{
	std::cout << std::setw(10) << "index|";
	std::cout << std::setw(10) << "first name|";
	std::cout << std::setw(10) << "last name|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	if (input.empty() == true)
		std::cout << std::setw(10) << "-|" << std::endl;
	else
	{
		std::cout << std::setw(10) << input + "|";
		std::cout << std::setw(10) << +"|";
	}
}