/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:07:32 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/14 14:56:23 by tlemesle         ###   ########.fr       */
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
	std::cout << std::endl;
	color("green", "Enter new contact informations :\n");
	this->addInfos("First Name : ", &Contact::setFirstName, this->index);
	this->addInfos("Last Name : ", &Contact::setLastName, this->index);
	this->addInfos("Nick Name : ", &Contact::setNickName, this->index);
	this->addInfos("Phone Number : ", &Contact::setPhoneNumber, this->index);
	this->addInfos("Darkest Secret : ", &Contact::setDarkestSecret, this->index);
	color("yellow", "A new contact has been added to Phonebook !\n");
	std::cout << std::endl;
	this->index++;
	
}

void    Phonebook::addInfos(std::string prompt, int (Contact::*f)(std::string), int index)
{
	std::string input;
	bool        valid_input = false;

	while (valid_input != true)
	{
		std::cout << prompt;
		std::cin >> input;
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

int	Phonebook::checkInput(std::string input) const
{
	int			i;
	std::string	ret;
	
	i = -1;
	while (input[++i])
	{
		if (isdigit(input[i]) == 0)
		{
			color("red", "Error: index should be a number\n");
			return (0);
		}
	}
	i = std::atoi(input.c_str());
	if (i < 0 || i > 8)
	{
		color("red", "Error: index should be between 0 and 8\n");
		return (0);
	}
	ret = this->_contact_arr[i].getContact("first name");
	if (ret == "")
	{
		color("red", "Error: this contact index doesn't exists yet\n");
		return (0);
	}
	return (1);
}

void	Phonebook::searchContact(void)
{
	std::string	input;

	printPrompt();
	color("green", "Enter contact index : ");
	std::cin >> input;
	if (checkInput(input))
		printContact(std::atoi(input.c_str()));
	else
		searchContact();
}

void	Phonebook::printContactList(const char *prompt_array[4])
{
	int			i;
	int			j;
	std::string	ret;
	
	for (i = 0; this->_contact_arr[i].getContact("first name").empty() == false; i++)
	{
		std::cout << std::setw(10) << i << "|";
		for (j = 1; j < 4; j++)
		{
			ret = this->_contact_arr[i].getContact(prompt_array[j]);
			if (ret.length() > 10)
			{
				ret.erase(10);
				ret.replace(9, 1, ".");
			}
			std::cout << std::setw(10) << ret << "|";
		}
		std::cout << std::endl;
	}
}

void	Phonebook::printPrompt(void)
{
	int			i;
	const char	*prompt_array[4] = {"index", "first name", "last name", "nickname"};

	for (i = 0; i < 4; i++)
		std::cout << std::setw(10) << prompt_array[i] << "|";
	std::cout << std::endl;
	if (this->_contact_arr[0].getContact("first name").empty() == true)
		for (i = 0; i < 4; i++)
			std::cout << std::setw(10) << "-" << "|";
	else
		printContactList(prompt_array);
	std::cout << std::endl;
}

void	Phonebook::printContact(int index)
{
	const char	*contact_infos[5] = {"first name", "last name", "nickname", "phone", "secret"};
	int	i;

	color("yellow", "\nYou chose to print : ");
	color("yellow", this->_contact_arr[index].getContact("first name"));
	std::cout << std::endl;
	for (i = 0; i < 5; i++)
	{
		std::cout << contact_infos[i] << " : " << \
		this->_contact_arr[index].getContact(contact_infos[i]) << std::endl;
	}
	std::cout << std::endl;
}