/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:58:26 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 13:36:41 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "main.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const & src);
		WrongCat & operator=(WrongCat const & rhs);
	
	void	makeSound() const;
	void	eat() const;
};


#endif