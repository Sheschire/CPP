/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:58:20 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 13:42:28 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

WrongCat::WrongCat(void) {
	this->_type = "WrongCat";
	std::cout << this->_type << " constructor called." << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << this->_type << " destructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src){
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = src;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs){
	std::cout << "WrongCat assignement operator called." << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return(*this);
}






void	WrongCat::makeSound(void) const {
	std::cout << "* Miaou *" << std::endl;
}

void	WrongCat::eat(void) const {
	std::cout << this->_type << " eats salt" << std::endl;
}