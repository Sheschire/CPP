/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:08:29 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/18 16:24:58 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name, int hitPts, int energyPts, int attackDmg) : ClapTrap(name, hitPts, energyPts, attackDmg){
    std::cout << "FragTrap multi parametric constructor called." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src){
	std::cout << "FragTrap copy construcor called." << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs){
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPts = rhs._hitPts;
		this->_energyPts = rhs._energyPts;
		this->_attackDmg = rhs._attackDmg;
	}
	return(*this);
}

void    FragTrap::highFivesGuys(void){
    std::string input;
    
    std::cout << "Hey ! HighFive me mate !" << std::endl;
    std::cin >> input;
    if (!input.compare("highfive") || !input.compare("Highfive") || !input.compare("HighFive"))
        color("green", "Cool Bro !\n");
    else
        color("red", "meh !\n");
}