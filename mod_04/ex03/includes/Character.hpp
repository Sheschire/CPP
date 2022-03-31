/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:52:51 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/31 16:21:07 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		Character();
		std::string _name; 
		AMateria	*_inventory[4];
		AMateria	*_droppedMaterias[100];
	public:
		~Character();
		Character(Character const & src);
		Character & operator=(Character const & rhs);
		Character(std::string const & type);
		Character(std::string name);
	
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif