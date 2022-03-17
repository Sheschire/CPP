/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:02:36 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/17 18:29:45 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// COPLIEN

ClapTrap::ClapTrap() : _hitPts(10), _energyPts(10), _attackDmg(0) {
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPts(10), _energyPts(10), _attackDmg(0) {
	std::cout << this->_name << " constructor called." << std::endl;
}

ClapTrap::~ClapTrap() {
	if (this->_name.empty() == false)
		std::cout << this->_name << "destructor called." << std::endl;
	else
		std::cout << "Default destructor called." << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPts = rhs._hitPts;
		this->_energyPts = rhs._energyPts;
		this->_attackDmg = rhs._attackDmg;
	}
	return(*this);
}

// PUBLIC FUNCTIONS

void    ClapTrap::attack(const std::string & target){
	std::cout << "ClapTrap " << this->_name << " attacks " << target\
	<< ", causing " << this->_attackDmg << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->_name << " takes " << amount
	<< " points of damage" << std::endl;
}