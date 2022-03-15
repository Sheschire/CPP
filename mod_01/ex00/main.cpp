/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:25:17 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/14 17:21:53 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	jackson("Jackson");
	Zombie	*harvey = newZombie("harvey");
	
	jackson.announce();
	randomChump("bob");
	harvey->announce();
	delete(harvey);
}