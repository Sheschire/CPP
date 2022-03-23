/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:59:33 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 12:21:11 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		~WrongAnimal();
		
	std::string	getType(void) const;
	void		makeSound(void) const;
	void		eat() const;
};

#endif