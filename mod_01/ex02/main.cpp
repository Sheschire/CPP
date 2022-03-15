/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:17:45 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/15 11:44:36 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>

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

void	print_address(std::string brain, std::string *stringPTR, std::string &stringREF)
{
	std::cout << std::endl;
	color("blue", "String address :\n");
	std::cout << &brain << std::endl << std::endl;
	color("green", "stringPTR stored address :\n");
	std::cout << stringPTR << std::endl << std::endl;
	color("yellow", "stringREF stored address :\n");
	std::cout << &stringREF << std::endl << std::endl;
}

void	print_value(std::string brain, std::string *stringPTR, std::string &stringREF)
{
	std::cout << std::endl;
	color("blue", "String value :\n");
	std::cout << brain << std::endl << std::endl;
	color("green", "stringPTR pointed value :\n");
	std::cout << *stringPTR << std::endl << std::endl;
	color("yellow", "stringREF pointed value :\n");
	std::cout << stringREF << std::endl << std::endl;
}

int main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	print_address(brain, stringPTR, stringREF);
	print_value(brain, stringPTR, stringREF);
}