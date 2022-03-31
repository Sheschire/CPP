/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:52:00 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/31 14:43:07 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	std::cout << "Character default constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->_droppedMaterias[i] = NULL;
}

Character::~Character(){
	std::cout << "Character default destructor called." << std::endl;
}

Character::Character(Character const & src){
	std::cout << "Character copy constructor called." << std::endl;
	*this = src;
}

Character & Character::operator=(Character const & rhs){
	std::cout << "Character assignment operator called." << std::endl;
	(void)rhs;
	return (*this);
}

Character::Character(std::string name) : _name(name){
	std::cout << "Parametric constructor called." << std::endl;
}
///////////////////////////////////////////////////////////////////

std::string const & Character::getName() const{
	return (this->_name);
}

void	Character::equip(AMateria *m){
	int	i = 0;

	while (i < 4)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
		i++;
		if (i == 4)
			std::cout << "Inventory full !" << std::endl;
	}
}

void	Character::unequip(int idx){
	int	i = 0;

	while (this->_droppedMaterias[i])
		i++;
	if (i == 100)
		std::cout << "You can't drop more materias !" << std::endl;
	else
	{
		this->_droppedMaterias[i] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter & target){
	this->_inventory[idx]->use(target);
}