/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:46:40 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/18 11:58:00 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap		goku("Goku");
	ClapTrap		vegeta("Vegeta");
	ClapTrap		majinVegeta(vegeta);
	unsigned int	repairValue = 5;
	unsigned int	chargeValue = 4;

	std::cout << std::endl;
	
	goku.printStats();
	vegeta.printStats();
	goku.chargeAttack(chargeValue);
	vegeta.chargeAttack(chargeValue);
	goku.attack(vegeta.getName());
	vegeta.takeDamage(goku.getAttackDmg());
	vegeta.attack(vegeta.getName());
	vegeta.beRepaired(repairValue);
	goku.attack(vegeta.getName());
	vegeta.takeDamage(goku.getAttackDmg());
	goku.printStats();
	vegeta.printStats();
	while (goku.getHitPoints() > 0 && vegeta.getEnergyPoints() > 0)
	{
		vegeta.attack(goku.getName());
		goku.takeDamage(vegeta.getAttackDmg());
	}
	goku.printStats();
	vegeta.printStats();
	
	std::cout << std::endl;
}