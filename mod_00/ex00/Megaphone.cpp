/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:15:59 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/08 14:37:46 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>


int main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[++i])
		{
			j = 0;
			while (av[i][j])
				std::cout << (char)toupper(av[i][j++]);
			if (av[i + 1])
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}