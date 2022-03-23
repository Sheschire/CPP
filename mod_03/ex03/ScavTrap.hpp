/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:01:24 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 10:40:40 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
		ScavTrap();
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const & rhs);
	
	void	attack(const std::string & target);
	void	guardGate();
};


#endif