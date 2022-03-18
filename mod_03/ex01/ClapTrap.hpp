/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:46:52 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/18 14:50:23 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <sstream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPts;
		int			_energyPts;
		int			_attackDmg;
		ClapTrap();
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		virtual ~ClapTrap();
		ClapTrap & operator=(ClapTrap const & rhs);

	virtual void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	chargeAttack(unsigned int amount);
	void	printStats(void) const;
	bool	checkLifeEnergy(void) const;

	std::string	getName(void) const;
	int			getAttackDmg(void) const;
	int			getHitPoints(void) const;
	int			getEnergyPoints(void) const;
};

void	color(std::string c, std::string s);
std::string operator+(std::string s1, int numberToConvert);

#endif