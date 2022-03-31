/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:00:36 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 13:57:53 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cat::Cat(void) : Animal(){
	this->_type = "Cat";
	std::cout << this->_type << " constructor called." << std::endl;
	this->brain = new Brain();
}

Cat::~Cat(void){
	std::cout << this->_type << " destructor called." << std::endl;
	delete(this->brain);
}

Cat::Cat(Cat const & src) : Animal(src){
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}

Cat & Cat::operator=(Cat const & rhs){
	std::cout << "Cat assignement operator called." << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*(this->brain) = *(rhs.getBrain());
	}
	return(*this);
}

Animal & Cat::operator=(Animal const & rhs) {
	std::cout << "Animal assignement operator called.(Cat)" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		*(this->brain) = *(rhs.getBrain());
	}
	return(*this);
}



//////////////////////////////////////////////////////////
void	Cat::makeSound(void) const {
	color("green", "* Miaou ! *\n");
}

void	Cat::eat(void) const{
	std::cout << this->_type << " eats fish" << std::endl;
}

void	Cat::setBrain(std::string s, int i){
	this->brain->setIdeas(s, i);
}

Brain	*Cat::getBrain(void) const{
	return (this->brain);
}