/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:01:03 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 15:44:13 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "main.hpp"
#include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;
		Brain		*brain;
	public:
		Animal();
		Animal(Animal const & src);
		Animal & operator=(Animal const & rhs);
		virtual ~Animal();
	
	virtual	Brain	*getBrain(void) const;
	virtual void	makeSound() const;
	virtual void	eat() const;
	std::string		getType() const;
};

#endif