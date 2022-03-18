/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:46:40 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/18 15:06:55 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(int ac, char **av)
{
	(void)ac;
	if (av[1][0] == '1'){
		color("green", "\n\n|    SIMULATION 1    |\n\n");
		ScavTrap		gohan("Gohan");

		gohan.printStats();
		gohan.attack("Satan");
	}

	else if(av[1][0] == '2')
	{
		color("green", "\n\n|    SIMULATION 2    |\n\n");
		ClapTrap	pikachu("Pikachu");
		ScavTrap	sacha("Sacha");

		sacha.attack(pikachu.getName());
		pikachu.takeDamage(pikachu.getAttackDmg());
		sacha.beRepaired(5);
		pikachu.chargeAttack(10000);
		pikachu.attack(sacha.getName());
		sacha.takeDamage(pikachu.getAttackDmg());
		pikachu.beRepaired(15000);
		pikachu.printStats();
		sacha.printStats();
	}
	
	else if(av[1][0] == '3')
	{
		color("green", "\n\n|    SIMULATION 3    |\n\n");
		ClapTrap	barodrig("Barodrig");
		ScavTrap	tlemesle("Tlemesle");
		
		//barodrig.guardGate();
		tlemesle.guardGate();
		tlemesle.printStats();
	}
	return (0);
}