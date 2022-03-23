/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:58:20 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 12:16:22 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	this->_type = "WrongCat";
	std::cout << this->_type << " constructor called." << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << this->_type << " destructor called." << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "* Miaou *" << std::endl;
}

void	WrongCat::eat(void) const {
	std::cout << this->_type << " eats salt" << std::endl;
}