/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:24:08 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 13:45:36 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain default destructor called." << std::endl;
}

Brain::Brain(Brain const & src){
	std::cout << "Brain copy constructor called." << std::endl;
	*this = src;
}

Brain & Brain::operator=(Brain const & rhs){
	int	i;
	std::cout << "Brain assignement operator called." << std::endl;
	if (this != &rhs)
	{
		for (i = 0; rhs.ideas[i].empty() == false; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return(*this);
}



void	Brain::setIdeas(std::string s, int i){
	this->ideas[i] = s;
}