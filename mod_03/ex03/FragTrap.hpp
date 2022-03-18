/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:08:40 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/18 16:33:24 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private:
        FragTrap();
    public:
        FragTrap(std::string name, int hitPts, int energyPts, int attackDmg);
        ~FragTrap();
        FragTrap(FragTrap const & src);
        FragTrap & operator=(FragTrap const & rhs);

    void    highFivesGuys(void);
};


#endif