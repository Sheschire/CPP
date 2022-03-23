/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:00:45 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 12:15:38 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->_type = "Dog";
	std::cout << this->_type << " constructor called." << std::endl;
}

Dog::~Dog(void){
	std::cout << this->_type << " destructor called." << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "* Wouaf *" << std::endl;
}

void	Dog::eat(void) const{
	std::cout << this->_type << " eats meat" << std::endl;
}