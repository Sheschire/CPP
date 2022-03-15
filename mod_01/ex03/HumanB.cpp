/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:49:35 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/15 13:13:01 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void) const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " \
		<< this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " needs a weapon to attack !" << std::endl;
}

int		HumanB::setWeapon(Weapon &weapon)
{
	if (weapon.getType().empty() == true)
	{
		std::cout << "Weapon needs a type !" << std::endl;
		return (1);
	}
	this->_weapon = &weapon;
	return (0);
}
