/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:23:30 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/15 17:21:16 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() : success(false)
{
	std::cout << "\nA customer with short and steel white hairs run towards you."\
	<< std::endl << "Oh no ! It's a ";
	color("red", "KAREN !\n\n");
}

Karen::~Karen()
{
	if (success == true)
	{
		std::cout << "\nYou handled this apocalyptic Karen like a real kickass Manager.\n";
		color("yellow", "Well Done !\n");
	}
	else
		color("red", "Complaint level unknown !\nYou don't know how to handle this and cry.\nYOU LOST !\n");
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

void	Karen::complain(std::string level)
{
	void		(Karen::*f_arr[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error,
	};
	std::string	levels[4] = {"debug", "info", "warning", "error"};
	int			i;

	this->success = false;
	for (i = 0; i < 4; i++)
		if (!level.compare(levels[i]))
			(this->*f_arr[i])();
}

void	Karen::debug(void)
{
	color("green", "Karen : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n I really do !\n");
	this->success = true;
}

void	Karen::info(void)
{
	color("green",  "Karen : I cannot believe adding extra bacon costs more money.\n You didn t put enough bacon in my burger !\nIf you did, I wouldn t be asking for more !\n");
	this->success = true;
}

void	Karen::warning(void)
{
	color("green", "Karen : I think I deserve to have some extra bacon for free.\nI ve been coming for years whereas you started working here since last month.\n");
	this->success = true;
}

void	Karen::error(void)
{
	color("green",  "Karen : This is unacceptable ! I want to speak to the manager now.\n");
	this->success = true;
}