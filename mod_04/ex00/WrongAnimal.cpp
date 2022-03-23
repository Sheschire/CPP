/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:59:16 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 12:16:00 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	this->_type = "WrongAnimal";
	std::cout << this->_type << " constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << this->_type << " destructor called." << std::endl;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "* Random animal sound *" << std::endl;
}

std::string	WrongAnimal::getType(void) const{
	return (this->_type);
}

void	WrongAnimal::eat(void) const{
	std::cout << this->_type << " eats sugar" << std::endl;
}