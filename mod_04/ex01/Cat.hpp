/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:01:37 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 14:00:56 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "main.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		~Cat();
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);
		Animal & operator=(Animal const & rhs);
	
	void	makeSound() const;
	void	eat() const;
	void	setBrain(std::string s, int i);
	virtual Brain	*getBrain() const;
};

#endif