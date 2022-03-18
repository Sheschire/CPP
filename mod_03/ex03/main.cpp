/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:46:40 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/18 16:21:26 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	color("green", "\n\n|    CREATE A FRAGTRAP    |\n\n");
	FragTrap	jason("Jason", 100, 100, 30);
	color("green", "\n\n|    CREATE A CLAPTRAP    |\n\n");
	ClapTrap	morray("Morray");
	
	jason.printStats();
	morray.printStats();
	color("green", "\n\n|    FRAGTRAP HIGH FIVE    |\n\n");
	jason.highFivesGuys();
	return (0);
}