/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:01:40 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 15:06:39 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "main.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		~Dog();
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);
		Animal & operator=(Animal const & rhs);

	void	makeSound() const;
	void	eat() const;
	void	setBrain(std::string s, int i);
	virtual Brain	*getBrain() const;
};

#endif