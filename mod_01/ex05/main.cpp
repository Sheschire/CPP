/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:23:39 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/15 17:23:51 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main()
{
	Karen		karen;
	std::string	input;

	color("yellow", "Select one of the following complaint level :\n  *debug\n  *info\n  *warning\n  *error\n");
	std::cout << "'exit' to end the simulation" << std::endl;
	while (1)
	{
		std::cin >> input;
		if (!input.compare("exit"))
			break ;
		else
			karen.complain(input);
		if (karen.success == false)
			break ;
	}
	return (0);
}