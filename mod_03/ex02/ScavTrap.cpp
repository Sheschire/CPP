/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:01:48 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/18 15:44:18 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap parametric constructor called." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src){
	std::cout << "ScavTrap copy construcor called." << std::endl;
	*this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPts = rhs._hitPts;
		this->_energyPts = rhs._energyPts;
		this->_attackDmg = rhs._attackDmg;
	}
	return(*this);
}

void	ScavTrap::attack(const std::string & target){
	if (this->checkLifeEnergy() == false)
		return ;
	std::cout << "ScavTrap Attack ! ";
	if (target == this->_name)
		std::cout << this->_name << " think about attacking himself but realize it's stupid..." << std::endl;
	else
	{
		std::cout << this->_name << " attacks " << target\
		<< ", causing " << this->_attackDmg << " points of damage !" << std::endl;
		this->_energyPts--;
		if (this->_energyPts <= 0)
			color("red", this->_name + " ran out of energy !\n");
	}
}

void	ScavTrap::guardGate(void){
	color("yellow", this->_name + " entered the Gate Keeper mode !\n");
	this->_hitPts += 100000;
}