/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:01:03 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 12:20:24 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		virtual ~Animal();
	
	virtual void	makeSound() const;
	virtual void	eat() const;
	std::string		getType() const;
};

#endif