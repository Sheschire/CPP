/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:48:54 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/15 13:15:49 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string type);
		~Weapon();

	std::string	&getType(void);
	int			setType(std::string type);
};

#endif