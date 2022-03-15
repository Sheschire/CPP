/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:25:23 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/15 11:04:42 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i;
	
	Zombie	*zombieHorde = new Zombie[N];
	for (i = 0; i < N; i++)
	{
		if (i == 0)
			zombieHorde[i].setName(name + " The First");
		else if (i == N - 1)
			zombieHorde[i].setName(name + " The Last");
		else
			zombieHorde[i].setName(name);
	}
	return (zombieHorde);
}