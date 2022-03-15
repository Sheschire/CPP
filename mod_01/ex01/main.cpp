/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:24:54 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/15 11:14:57 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *zombies;
    int sizeHorde;
    int i;
    
    sizeHorde = 10;
    zombies = zombieHorde(sizeHorde, "Jackson");
    for (i = 0; i < sizeHorde; i++)
        zombies[i].announce();
    color("yellow", "\nYou start running too and damn you're fast !\n\n");
    delete [] zombies;
}