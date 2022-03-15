/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:24:21 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/15 11:06:50 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>

class   Zombie
{
    private:
        std::string _name;
        
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        
        void    announce(void) const;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif