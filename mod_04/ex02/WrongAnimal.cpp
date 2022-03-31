/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:59:16 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 13:43:17 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

WrongAnimal::WrongAnimal(void) {
	this->_type = "WrongAnimal";
	std::cout << this->_type << " constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << this->_type << " destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src){
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = src;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs){
	std::cout << "WrongAnimal assignement operator called." << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return(*this);
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