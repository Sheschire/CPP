/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:08:24 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/14 14:24:48 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

void    actionExit(void)
{
	std::cout << "Program exit" << std::endl;
	exit(0);
}

void	color(std::string c, std::string s)
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

int main()
{
	Phonebook   repertoire;
	std::string input;
	int i = -1;

	while (1)
	{
		color("green", "Enter a command :\n1. ADD\n2. SEARCH\n3. EXIT\n>> ");
		std::cin >> input;
		if (std::cin.eof())
			break ;
		while (input[++i])
			input[i] = tolower(input[i]);
		if (!input.compare("add"))
			repertoire.addContact();
		else if(!input.compare("search"))
			repertoire.searchContact();
		else if (!input.compare("exit"))
			actionExit();
		else
			color("red", "Error: Command not found\n");
	}
	return 0;
}