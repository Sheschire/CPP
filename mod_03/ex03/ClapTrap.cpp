/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:02:36 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/18 16:18:07 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// COPLIEN
ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPts(100), _energyPts(50), _attackDmg(20) {
	std::cout << "ClapTrap parametric constructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src){
	std::cout << "ClapTrap Copy constructor called." << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called." << std::endl;
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

// CONSTRUCTOR FOR DERIVED CLASS FRAGTRAP
ClapTrap::ClapTrap(std::string name, int hitPts, int energyPts, int attackDmg) : _name(name), _hitPts(hitPts), _energyPts(energyPts), _attackDmg(attackDmg){
	std::cout << "Dedicated constructor for FragTrap called." << std::endl;
}


// PUBLIC FUNCTIONS
bool	ClapTrap::checkLifeEnergy(void) const{
	if (this->_energyPts > 0 && this->_hitPts > 0)
		return (true);
	else
	{
		if (this->_hitPts <= 0)
			color("red", this->_name + " is dead. He cannot move !\n");
		else if (this->_energyPts <= 0)
			color("red", this->_name + " is out of energy. He cannot move !\n");
		return (false);
	}
}

void    ClapTrap::attack(const std::string & target){
	if (this->checkLifeEnergy() == false)
		return ;
	std::cout << "ClapTrap Attack ! ";
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

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->checkLifeEnergy() == false)
		return ;
	std::cout << this->_name << " takes " << amount
	<< " points of damage !" << std::endl;
	this->_hitPts -= amount;
	if (this->_hitPts <= 0)
		color("red", this->_name + " died !\n");
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->checkLifeEnergy() == false)
		return ;
	std::cout << this->_name << " repair himself and get " << amount\
	<< " Hit points back !" << std::endl;
	this->_hitPts += amount;
	this->_energyPts--;
	if (this->_energyPts <= 0)
			color("red", this->_name + " ran out of energy !\n");
}

void	ClapTrap::chargeAttack(unsigned int amount){
	if (this->checkLifeEnergy() == false)
		return ;
	std::cout << this->_name << " is charging a powerful spell : Attack += "<< amount << std::endl;
	this->_attackDmg += amount;
	this->_energyPts--;
	if (this->_energyPts <= 0)
			color("red", this->_name + " ran out of energy !\n");
}

void	ClapTrap::printStats(void) const{
	color("yellow", this->_name + " -> Hit Points : " + this->_hitPts + \
	" | Energy Points : " + this->_energyPts + " | Attack Dmg : " + this->_attackDmg + '\n');
}



// ACCESSORS
std::string	ClapTrap::getName(void) const{
	return (this->_name);
}

int	ClapTrap::getAttackDmg(void) const{
	return(this->_attackDmg);
}

int	ClapTrap::getHitPoints(void) const{
	return (this->_hitPts);
}

int	ClapTrap::getEnergyPoints(void) const{
	return (this->_energyPts);
}



// OPERATOR OVERLOAD
std::string operator+(std::string s1, int numberToConvert){
	std::string			join;
	std::stringstream	o;

	o << numberToConvert;
	join = s1 + o.str();
	return (join);
}

// UTILS
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