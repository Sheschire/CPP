/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:00:36 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 12:15:42 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->_type = "Cat";
	std::cout << this->_type << " constructor called." << std::endl;
}

Cat::~Cat(void){
	std::cout << this->_type << " destructor called." << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "* Miaou *" << std::endl;
}

void	Cat::eat(void) const{
	std::cout << this->_type << " eats fish" << std::endl;
}