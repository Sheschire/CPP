/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:25:30 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/15 11:08:50 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	~Zombie();
	
	void	setName(std::string name);
	void	announce(void) const;
};

void	color(std::string c, std::string s);
Zombie	*zombieHorde(int N, std::string name);

#endif