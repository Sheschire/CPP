/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:50:17 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/15 13:16:04 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

std::string	&Weapon::getType(void)
{
	std::string	&typeRef = this->_type;

	return(typeRef);
}

int	Weapon::setType(std::string type)
{
	if (type == "")
	{
		std::cout << "Weapon needs a type !" << std::endl;
		return (1);
	}
	this->_type = type;
	return (0);
}