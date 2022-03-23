/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:00:29 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 14:01:30 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Animal::Animal(void) {
	this->_type = "Animal";
	std::cout << this->_type << " constructor called." << std::endl;
}

Animal::~Animal(void){
	std::cout << this->_type << " destructor called." << std::endl;
}

Animal::Animal(Animal const & src){
	std::cout << "Animal copy constructor called." << std::endl;
	*this = src;
}

Animal & Animal::operator=(Animal const & rhs){
	std::cout << "Animal assignement operator called." << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return(*this);
}




void	Animal::makeSound(void) const {
	std::cout << "* Random animal sound *" << std::endl;
}

std::string	Animal::getType(void) const{
	return (this->_type);
}

void	Animal::eat(void) const{
	std::cout << this->_type << " eats fruits" << std::endl;
}