/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:23:45 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 13:37:26 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "main.hpp"

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		~Brain();
		Brain(Brain const & src);
		Brain & operator=(Brain const & rhs);
	
	void	setIdeas(std::string s, int i);
};

#endif